/*! 
 * Fonction statique lisant l'entête d'une image
 * \param fichier l'image 
 * \param largeur la largeur de l'image (à stocker)
 * \param hauteur la hauteur de l'image (à stocker)
 * \param valeur_max l'intensité maximale d'un pixel (à stocker)
 * \return true si la lecture s'est bien déroulée, false sinon
 */
bool lire_entete_image_pgm(const FILE* fichier,  int* largeur,  int* hauteur,  int* valeur_max) {

    enum etats { INIT, MAGIC_NUMBER_FOUND, WIDTH_HEIGHT_FOUND, MAX_VAL_FOUND, ERROR };
    enum etats etat = INIT ; 
    const int MAX_LENGTH = 4096;

    char* buf = malloc(sizeof(char)*MAX_LENGTH);
    bool lireEntete = true;

    while(lireEntete) {

        fgets(buf, MAX_LENGTH, (FILE *) fichier);
        switch(etat) {

            case INIT:
            if(strncmp(buf,"P",1) == 0) etat = MAGIC_NUMBER_FOUND;
            break;
            case MAGIC_NUMBER_FOUND:
            while(strncmp(buf,"#",1) == 0) 
                fgets(buf, MAX_LENGTH, (FILE *) fichier);
            if(sscanf(buf,"%d %d", largeur, hauteur) == 2) etat = WIDTH_HEIGHT_FOUND; 
            else lireEntete = false;
            break;
            case WIDTH_HEIGHT_FOUND:
            if(sscanf(buf,"%d", valeur_max) == 1) {
                if(*valeur_max == 0) fprintf(stderr, "Entete PGM : une valeur max de 0 n'est pas autorisee.");
                else etat = MAX_VAL_FOUND;
            }
            lireEntete = false;
            break;
            default:
            etat = ERROR;
            lireEntete = false;
        }

    }

    free(buf);

    if(etat != MAX_VAL_FOUND) {
        fprintf(stdout, "Entete PGM incorrect, evaluation terminee a l'etat %d\n", etat);
        return false;
    }

    return true;

}

/*! 
 * Fonction lisant une image en binaire
 * \param fichier l'image 
 * \param valeur_max p l'image dans laquelle lire (pgm est typedef struct pgm_img* pgm;)
 * \return true si la lecture s'est bien déroulée, false sinon
 */
bool lire_donnees_image_pgm(const FILE* fichier, pgm p) {

    const int OCTETS_A_LIRE = p->valeur_max < 256 ? 1 : 2;

    for( int i = 0; i < p->hauteur; i++) {
        for( int j = 0; j < p->largeur; j++) {
            if(fread(&p->image[i][j], OCTETS_A_LIRE, 1, (FILE*)fichier) == 0)
                return false;
        }
    }

    return true;

}

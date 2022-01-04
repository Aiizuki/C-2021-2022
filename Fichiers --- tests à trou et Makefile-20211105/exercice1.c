#include "exercice1.h"



struct tableau {
  void* bdd;
  int tailleElement;
  int tailleTableau;
};

struct tableau* creer(int taille, int cases){
  struct tableau* LeTab = malloc(sizeof(struct tableau));
  LeTab->bdd = malloc(taille*cases);
  LeTab->tailleElement = taille;
  LeTab->tailleTableau = cases;
  return LeTab;
}

void afficher (T LeTabStruct, void(*afficherC)(void*)){
  for(int i=0; i<LeTabStruct->tailleTableau; i++){
    void* bdd_ptr = ((char*) LeTabStruct->bdd)+(i*LeTabStruct->tailleElement);
    (*afficherC)(bdd_ptr);
  }
}

T aleatoire(int nbCases, int tailleE, void(*random)(void*)){
  T LeTab = creer(tailleE, nbCases);
  for(int i=0; i<LeTab->tailleTableau; i++){
    void* bdd_ptr = ((char*) LeTab->bdd)+(i*LeTab->tailleElement);
    (*random)(bdd_ptr);
  }

  return LeTab;
}


/* Inclusion des librairies standard */
#include <stdlib.h> // EXIT_SUCCESS
#include <stdio.h> // Fonctions usuelles (printf, ...) 
#include <math.h>

int  nombreM(int);
int  nombreP(int);

///////////////////////////////////

int main(int argc, char** argv) {

    printf("Affichage d'un entier avec retour à la ligne : %d\n", 5);
    printf("Premier Test : %s\n", "Salut sa va ?");
    int m = nombreM(34354);
    if(m==1){
    printf("c oui pour nombreM \n");
    }
    else{
    printf("c'est non pour nombreM \n");
    }

    int n = nombreP(7);
    if(n==1){
    printf("nombre parfait \n");
    }
    else{
    printf("nombre imparfait \n");
    }

    /* EXIT_SUCCESS est une constante définie à la valeur 0
     * #define	EXIT_SUCCESS	0
     */
    return EXIT_SUCCESS;

}
///////////////////////
int nombreM(int n){
int rep = 0;
if(n==0 || n==1 || n==3435 || n==438579088){
rep = 1;
}
else{
rep = 0;
}

return rep;
}
///////////////////////
int nombreP(int k){
int i=0;
int c=0;
int rep=0;
for(i=1;i<k;i++){
if(k%i==0){
c = c+i;
}
}
if(k==c){
rep=1;
}
else{
rep=0;
}
return rep;
}

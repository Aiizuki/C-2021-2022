#include "fonctions.h"
#include <time.h>


int main(void){
  srand(time(NULL));
  int n = 31;
  int m = 5;
  /*
  int* T = creerTableau(n,m);
  for(int i=0; i<n;i++){
    printf("[%d],",T[i]);
  }
  free(T);
  T = NULL;
  printf("\n");
  */

  /*
  int** T = creerTableauxTableau(n,m);

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d",T[i][j]);
    }
    free(T[i]);
    printf("\n");
  }
  free(T);
  T=NULL;
  */

  int tableau [7] = {1,8,2,2,2,2,1};
  int tableau2 [7] = {1,2,1,2,3,4,5};

  printf("%d\n",boyerMoore(tableau,7));
  printf("%d\n",boyerMoore(tableau2,7)); //on ne va pas savoir dans le cas ou il n'y a pas de majorant.

  int k = mpn(n,m);

  printf("%d\n",k);
}

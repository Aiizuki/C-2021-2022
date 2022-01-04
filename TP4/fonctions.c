#include "fonctions.h"
#include <time.h>


int* creerTableau(int m, int n){
  int* t = (int*)malloc(n*sizeof(int));
  for(int i=0; i<n; i++){
    t[i] = rand()%m;
    printf("[%d],",t[i]);
  }
  return t;
}

int** creerTableauxTableau(int m , int n){
  int** t = (int**)malloc((n*sizeof(int*)));
  for(int i=0; i<n; i++){
    t[i] = (int*)malloc((n*sizeof(int)));
    for(int j=0; j<n; j++){
      t[i][j] = rand()%m;
    }
  }

  return t;
}

int majoritaire(int* T, int b){
  int maj =0;
  for(int i =0; i<b; i++){
    maj = 0;
    for(int j=0; j<b; j++){
      if(T[i] == T[j]){
        maj += 1;
        if(maj>(b/2)){
          return T[i];
        }
      }
    }
  }

  return -1;
}

int factorielle(int n)
{
  if(n==1){
    return n;
  }

  else{
    return(factorielle(n-1)*n);
  }
}

int boyerMoore(int* tab, int n){
  int candidat = tab[0];
  int compteur = 0;
  for(int i=0; i<n; i++){
    if(tab[i] == candidat){
      compteur+=1;
    }

    else if (compteur == 0){
      candidat = tab[i];
    }

    else{
      compteur = compteur-1;
    }
  }

  return candidat;
}

int mpn(int n, int m){
  int k = (factorielle(n+m))/(factorielle(n)*factorielle(m));
  return k;
}

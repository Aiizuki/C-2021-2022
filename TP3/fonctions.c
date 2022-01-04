#include "fonction.h"
#include <assert.h>

void nbCarre(int* a){
  *(a) = (*(a))*(*(a)) ;
}

void echanger(int* a, int* b){
  int c = *(a);
  *(a) = *(b);
  *(b) = c;
}

void triCroissant(int* a, int* b, int* c){

  if(*(a) < *(b)){
    if(*(b) > *(c)){
      echanger(b, c);
      if(*(a)>*(b)){
        echanger(a,b);
      }
    }
  }

  else if(*(a) > *(b)){
    echanger(a, b);
    if(*(b) > *(c)){
      echanger(b, c);
      if(*(a)>*(b)){
        echanger(a,b);
      }
    }
  }

}

bool est_trie(int* a, int b){
  int tri = 1;
  for(int i =0; i < b; i++){
    for(int j =1+i; j < b; j++){
      if (a[i] > a[j]){
        tri = 0;
        break;
      }
    }
  }
  if (tri==0){
    return false;
  }
  else{
    return true;
  }
}

bool doublons(int* a, int b){
  assert(est_trie(a,b));
  int tri = 1;
  for(int i =0; i < b; i++){
    for(int j =1+i; j < b; j++){
      if (a[i] == a[j]){
        tri = 0;
        break;
      }
    }
  }
  if (tri==0){
    return false;
  }
  else{
    return true;
  }
}

bool recherche(int* a, int b, int n){
  assert(est_trie(a,b));
  bool existant = false;
  for(int i = 0; i<b; i++){
    if(a[i] == n){
      existant = true;
      break;
    }

    else{
      existant = false;
    }
  }

  return existant;
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

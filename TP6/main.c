#include "fonctions.h"
#include <string.h>
#include <time.h>

int main(void){
  srand(time(NULL));
/*
  Point p;
  p.x = 2.256;
  p.y = 5;
  afficher(p);
  Point* k = translation(&p,3,3);
  afficher(*(k));
  Modifier(&p,3,3);
  afficher(p)*/
  chemin* c = generer(5,1,10);

  for(int i=0; i<Getlg(c); i++){
    afficher(*(GetTab(c)[i]));
  }

  /*free(k);*/
  liberer(c);

  int a = 5, b = 8;
  printf("a > b ? %d\n", sup((void *)&a, (void *)&b, &est_sup_int));

  afficherG((void *)&a);
  Point* i = creerG((void*)&a,(void*)&b);
  afficher(*i);

  free(i);
}

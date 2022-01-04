#include "fonctions.h"
#include <string.h>
#include <time.h>



struct struct_chemin{
  Point** tab;
  int nbSommet;
};

int Getlg(chemin* c){
  return c->nbSommet;
}

Point** GetTab(chemin* c){
  return c->tab;
}

void afficher(Point P){
  printf("[%.2f,%.2f]\n", P.x, P.y);
}

Point* creer(double x, double y){
  Point *s = malloc( sizeof(Point) );
  s->x = x;
  s->y = y;

  return s;
}

Point* translation(Point* p, int dx, int dy){
  Point *s = malloc(sizeof(Point));
  s->x = (*p).x + dx;
  s->y = (*p).y + dy;

  return s;
}

void Modifier(Point* p, int dx, int dy){
  p->x = dx;
  p->y = dy;
}

chemin* generer(int n, int min, int max){
  Point** tab = (Point**)malloc(n*sizeof(Point*));
  for(int i=0; i<n; i++){
    tab[i] = creer(rand()%max+min ,rand()%max+min);
  }

  chemin* s = malloc(sizeof(chemin));
  s->tab = tab;
  s->nbSommet = n;

  return s;
}

void liberer(chemin* c){
  for(int i=0; i<c->nbSommet;i++){
    free((c->tab)[i]);
  }
  free(c->tab);
  free(c);
}

bool est_sup_int(void* val_1, void* val_2) {
  int* a = (int *) val_1;
  int* b = (int *) val_2;
  printf("a=%d,b=%d \n",*a,*b);
  return *a > *b;
}

bool sup( void* val_1, void* val_2, bool(*est_sup)(void*, void*)) {
  return (*est_sup)(val_1, val_2);
}

void afficherG(void* val){
  char* a = (char *) val;
  printf("%c\n", *a);
}

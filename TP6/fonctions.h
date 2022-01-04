#ifndef FONCTION_H
#define FONCTION_H

#include "chemin.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
  double x;
  double y;
}Point;


void afficher(Point);
Point* creer(double, double);
Point* translation(Point*, int, int);
void Modifier(Point*,int,int);
chemin* generer(int,int,int);
int Getlg(chemin*);
Point** GetTab(chemin*);
void liberer(chemin*);
bool est_sup_int(void*, void*);
bool sup(void*,void*,bool(void*, void*));
void afficherG(void*);
Point* creerG(void*,void*);



























#endif

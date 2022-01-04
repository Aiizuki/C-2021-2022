#ifndef EXERCICE1_H
#define EXERCICE1_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tableau* T;
T creer(int,int);
void afficher(T, void(void*));
static void afficher_structure(void*);
T aleatoire(int,int,void(*random)(void*));
void aleatoire_int(void*);































#endif

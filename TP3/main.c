#include "fonction.h"

int a = 6;
int b = 7;
int c = 3;

int main(void)
{
  /*
  printf("valeur de base de a : %d \n",a);
  nbCarre(&a);
  printf("Nouvelle valeur de a : %d \n",a);
  printf("\r\n");
  printf("Valeur de a : %d \n", a);
  printf("Valeur de b : %d \n", b);
  echanger(&a,&b);
  printf("Valeur de a : %d \n", a);
  printf("Valeur de b : %d \n", b);
  printf("\r\n");
  printf("Valeur de a : %d, Valeur de b : %d, Valeur de c : %d\n", a,b,c);
  triCroissant(&a,&b,&c);
  printf("Valeur de a : %d, Valeur de b : %d, Valeur de c : %d\n", a,b,c);
  printf("\r\n");
*/

  int trie [5] = { 1, 2, 2, 4, 8 };
  int non_trie [5] = { 1, 4, 3, 5, 8 };
  int sans_doublons [5] = { 2, 3, 4, 6, 8 };
  int avec_doublons [5] = { 2, 3, 3, 3, 8 };

  printf("Trié ? %d\n", est_trie(trie,5));
  printf("Trié ? %d\n", est_trie(non_trie,5));
  printf("Doublons ? %d\n", doublons(avec_doublons,5));
  printf("Doublons ? %d\n", doublons(sans_doublons,5));
  printf("Existant ? %d\n", recherche(sans_doublons,5,17));
  printf("Existant ? %d\n", recherche(sans_doublons,5,2));
  printf("Majoritaire : %d\n", majoritaire(sans_doublons,5));
  printf("Majoritaire : %d\n", majoritaire(avec_doublons,5));

  return EXIT_SUCCESS;
}

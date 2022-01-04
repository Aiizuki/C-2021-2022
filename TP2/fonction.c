#include "fonction.h"
#include "catalan.c"
#include "triangleP.c"

/*================================*/
int premier(int n)
{
  for(int i=2; i<=n; i++)
  {
    if(n%i == 0 && i!=2){
      printf("NonPremier\n");
      break;
    }
    else{
      printf("Premier\n");
      break;
    }
  }
  return 1;
}
/*===================================*/
bool premier_bool(int n)
{
  bool premier_bool;
  for(int i=2; i<=n; i++)
  {
    if(n%i == 0 && i!=2){
      premier_bool=false;
      break;
    }
    else{
      premier_bool=true;
      break;
    }
  }
  return premier_bool;
}
/*=====================================*/
int fibonacci(int n)
{
  if(n==0){
    return 0;
  }

  else if(0<=n && n<=2){
    return 1;
  }

  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
/*=========================================*/
int syracuse(int n)
{
  printf("%d\n", n);
  if(n==1){
    return n;
  }

  else if(n%2==0){
    return syracuse((n/2));
  }

  else{
    return syracuse((3*n+1));
  }
}
/*===========================================*/
int factorielle(int n)
{
  if(n==1){
    return n;
  }

  else{
    return(factorielle(n-1)*n);
  }
}
/*=============================================*/
int coefficient (int n, int p)
{
  return (factorielle(n))/(factorielle(p)*(factorielle(n-p)));
}
/*==============================================*/
int produitC(int n)
{
  if(n/10 > 0){
    return n%10*produitC(n/10);
  }

  else{
    return n;
  }
}

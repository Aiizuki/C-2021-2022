#include "triangleP.h"


void TrianglePascal(int n)
{
  int y;
  int x;

  for(x=0;x<n+1;x++){
    for(y=0;y<x+1;y++){
      printf("%d", (factorielle(x))/((factorielle(y)*factorielle(x-y))));
    }
    printf("\n");
  }

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

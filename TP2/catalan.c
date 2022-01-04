#include "catalan.h"

int catalan(int n)
{
  n=n-1;
  return (factorielle(2*n))/(factorielle(n)*factorielle(n+1));
}

#include "fonction.h"
#include "catalan.h"
#include "triangleP.h"

int main(void)
{
  coefficient(10,3);
  printf("%d\n", catalan(7));
  TrianglePascal(9);
}

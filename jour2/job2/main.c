#include <stdio.h>
#include <stdlib.h>
#include "increment.h"
int main()
{
  int a = 0;

  printf("%d",a);

  increment(&a);

  printf("\n%d\n",a);
  
  return 0;
}

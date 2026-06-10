#include <stdio.h>
#include <stdlib.h>
#include "divide.h"

int main()
{
  int a = 10;
  printf("%d",a);

  divide(&a);

  printf("\n%d\n",a);
  return 0;
}

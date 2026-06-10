#include <stdio.h>
#include <stdlib.h>
#include "swap.h"

int main()
{
  int a = 5;
  int b = 10;

  printf("%d - %d",a,b);
  swap(&a,&b);
  printf("\n%d - %d\n",a,b);
  

  return 0;
  
}

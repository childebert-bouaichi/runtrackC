#include <stdio.h>
#include <stdlib.h>
#include "sum_array.h"

int main()
{

  int a[5] = {10, 10, 10, 10, 10};
  int n;
  int result = 0;

  for (n = 0; n < 5; n++)
    {
      
    result = sum_array(a, n);
    }
  printf("\n%d\n",result);

  return 0;
}

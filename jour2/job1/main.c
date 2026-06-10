#include <stdio.h>
#include <stdlib.h>
#include "print_address.h"

int main()
{
  int a = 5;

  print_address(&a);
  return 0;
}

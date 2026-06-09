#include <stdio.h>
#include "my_putchar.h"
#include "my_putstr.h"
int my_putchar(char c)
{
 
  my_putstr(&c);
  return 0;
}

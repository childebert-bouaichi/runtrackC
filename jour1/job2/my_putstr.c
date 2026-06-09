#include "my_putstr.h"
#include <stdio.h>
#include <stdlib.h>
#include "my_putchar.h"
int my_putstr(char *c)
{
  c = "Je suis un gros connard !";
  if (c == NULL)
    {
      return EXIT_FAILURE;
  } else {
   
    return *c; 
  }
  return 0;

}

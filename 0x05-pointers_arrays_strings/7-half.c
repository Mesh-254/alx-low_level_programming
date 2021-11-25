#include "main.h"
void puts_half(char *str)
{
  int i;

  for (i = 0; str[i]; i++)
    ;
      for (i /= 2; str[i]; i++)
	{
	  _putchar(str[i]);
	}
      _putchar('\n');
    
}

#include "main.h"

char *string_toupper(char *str)
{
  int k;

  for (k = 0; str[k] != '\0'; k++)
    {
      for (;str[k] >= 'a' && str[k] <= 'z'; k++)
    {

	str[k] =str[k] - 32;
	
         }

}
  return(str);
}

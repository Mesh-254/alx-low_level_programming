#include "main.h"
char *_strcat(char *dest, char *src)
{
  int i = -1, k;
  for (k = 0; dest[k]; k++)
    ;
  do
    {
      k++;
      dest[k] = src[i];
      i++;
    }

  while (src[i] != '\0');
    return (dest);
}

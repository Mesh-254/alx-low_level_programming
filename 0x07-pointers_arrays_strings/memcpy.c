#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int k;
  for (k = 0; k <= n; k++)
   
      dest[k] = src[k + n];
   
  return(dest);
}

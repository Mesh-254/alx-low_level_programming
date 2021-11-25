#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
  int k;
  for (k = 0; k < n && src[k]; k++)

    {
      dest[k] = src [k];
      
    }
  return (dest);
}

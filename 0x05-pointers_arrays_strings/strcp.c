#include "main.h"
char *_strcpy(char *dest, char *src)
{
  int i = -1;
do
  {
    i++;
    
    
          dest[i] = src[i];
    }

  while (src[i]);
      return(dest);

}

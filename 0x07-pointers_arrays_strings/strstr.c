#include "main.h"
char *_strstr(char *haystack, char *needle)
{
  int i = 0;
  
  while (*haystack)
    {
      
      if (haystack[i] == needle[i])
	i++;
    }
  return (haystack);
  
}

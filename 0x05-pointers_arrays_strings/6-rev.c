#include "main.h"
void rev_string(char *s)
{
  int i, k, len;
  char temp;

  for (len  = 0; s[len]; len++)

    i = 0;
  k = s[len];
  while (k--)
    {
      temp = s[len - 1];
      s[len - 1] = s[i];
      s[i] = temp;
      i++;	
    }
	
}

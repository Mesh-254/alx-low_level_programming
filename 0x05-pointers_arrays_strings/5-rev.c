#include "main.h"
void rev_string(char *s)
{
  int i = 0;
  while(s[i])
    {
      i++;
    }
  for (i = s[i] - 1; s[i] >= 0; i--);
  }

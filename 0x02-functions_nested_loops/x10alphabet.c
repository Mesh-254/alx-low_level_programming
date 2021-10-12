#include <stdio.h>
int main(void)
{
  int i;
  while (i <= 10)
    {
      int c;
      for (c = 'a'; c <= 'z'; c++)
	{
	  putchar(c);
	}
      putchar('\n');
    }
}

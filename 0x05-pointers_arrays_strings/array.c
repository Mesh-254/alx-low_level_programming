#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{

  for (; a[n]; n--)
    {

      printf("%d", a[n]);
      if (n > 0)
	{
	  printf(", ");
	}
    }
  printf("\n");
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @max: integer
 * @min: integer
 * Return: array
 */
int *array_range(int min, int max)
{
int  *p;
int i, j = 0;

if (min > max)
return (NULL);
p = malloc((max - min + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (i = 0;  i <= max; i++)
{
p[j] = i;
j++;
}
return (p);
}

#include "main.h"
/**
 * _puts - prints a string
 * *@str: string to be printed
 * return: always (0)
 */
void _puts(char *str)
{
int j;

for (j = 0; str[j]; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}

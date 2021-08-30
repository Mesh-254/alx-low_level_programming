#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry block
 * description - lowercase without q and e
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}

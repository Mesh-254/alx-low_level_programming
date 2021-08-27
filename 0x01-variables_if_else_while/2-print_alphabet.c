#include <stdio.h>
#include <stdlib.h>

/**
 *
 *main: entry point
 *Description: Print alphabets
 *Return: 0
 *
 */
int main(void)
{
char c = 'a';

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');

return (0);


}

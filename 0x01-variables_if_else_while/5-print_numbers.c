#include <stdio.h>
#include <stdlib.h>

/**
 *main: Entry point
 *description: printing single digit numbers of base10
 *return: 0
 *
 */

int main(void)
{
char c = '0';

while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
 
return (0);
}

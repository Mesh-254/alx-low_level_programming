#include <stdio.h>
/**
 *main: main block
 *description: print hexadecimal numbers in lowercase
 *return: 0
 *
 */
int main(void)
{
int i;
int ch;

for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch ='a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);

}
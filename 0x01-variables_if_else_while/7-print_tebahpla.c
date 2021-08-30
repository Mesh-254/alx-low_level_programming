#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description - prints all single digitnumbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}

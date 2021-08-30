#include <stdio.h>

/**
 * main - entry point
 * description: print possible combination 0-9
 * Return: always 0 (Success)
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i == '9')
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

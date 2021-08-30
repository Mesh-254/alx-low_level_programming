#include <stdio.h>

/**
 * main - main block
 * description: prints base ten single digit numbers without char
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(48 + i);
i++;
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{

int count;
char c;

for (count = 1; count <= 10; count++)
{
for (c = 0; c <= 14; c++)
{
if (c / 1 > 0)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}

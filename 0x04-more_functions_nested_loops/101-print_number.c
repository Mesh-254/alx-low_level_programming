#include "main.h"
/**
 * print_number - prints an interger
 * @n: number
 */
void print_number(int n)
{
unsigned long int a, i;
a = 612852475143;
for (i = 3; i < (a / 2); i = i + 2)
{
while ((a % i == 0) && (a != i))
a = a / i;
}
printf("%lu\n", a);
return (0);
}

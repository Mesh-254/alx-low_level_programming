#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of characters to draw
 */
void print_diagonal(int n)
{
int draw;
int surface;

if (n > 0)
{
for (draw = 1; draw <= n; draw++)
{
for (surface = 1; surface < draw; surface++)
_putchar(' ');
_putchar('\\');
_putchar('\n');

}
}
else
_putchar('\n');
}

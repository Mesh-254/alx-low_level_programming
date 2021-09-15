#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
  if (n == 0)
    return (0);
  return (check(1, n));
}
int check(int a, int b)
{
if (a * a > b)
return (-1);
else if (a * a == b)
return (a);
else
return (check(a + 1, b));
}


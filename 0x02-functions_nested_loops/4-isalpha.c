#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character check
 * Return: Always (0) or (1)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

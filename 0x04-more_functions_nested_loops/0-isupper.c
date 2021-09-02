#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @c: integer argument
 * Return: if uppercase 1, o otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}

#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: interger argument
 * Return: always (0) or (1)
 */
int _isdigit(int c)
{
c = 0;

if (c >= '0' && c <= '9')

{
return (1);
}

else

{
return (0);
}
}

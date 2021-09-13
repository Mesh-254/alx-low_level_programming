#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: char
 * @c: string
 * Return: pointer s to first 'c' char
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
break;
}
} while (*s++);

return (s);
}

#include "main.h"
/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: pointer
 * Return: capitalized string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
for (; str[i] <= 'z' && str[i] >= 'a'; i++)
{
str[i] -= 32;
}
}
return (str);
}

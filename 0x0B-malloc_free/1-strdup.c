#include  "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *s;
int size, l = 0;
if (str == NULL)
return (NULL);
for (size = 0; str[size]; size++)
l++;
s = malloc(sizeof(char) * (l + 1));
if (s == NULL)
return (NULL);
for (size = 0; str[size]; size++)
s[size] = str[size];
s[l] ='\0';
return (s);
}

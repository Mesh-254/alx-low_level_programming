#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: pointer of char type
 * @src: pointer of char type
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\n'; i++)
;
do {
a++;
dest[i] = src[a];
i++;
} while (src[a] != '\0');

return (dest);
}

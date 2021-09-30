#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_strings - print strings
 * @separator:char
 * @n:unsigned int
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;
va_start(list, n);
for (i = 1; i < n; i++)
{
str = va_arg(list, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != n && separator != NULL)
printf("%s", separator);
}
va_end(list);
printf("\n");
}

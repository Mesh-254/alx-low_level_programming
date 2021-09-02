#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: void
 */
int main(void)
{
int i;
for (i = 1; 1 <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i == 100)
{
break;
}
else
printf(" ");
}
printf("\n");
return (0);
}

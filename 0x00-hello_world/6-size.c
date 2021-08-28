#include <stdio.h>
/**
 * main: entry point
 * Description: this program prints out size of various types
 * Return: 0
 */
int main(void)
{
  /**
   *description: print sizes of different data types
   *
   */
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
/**
 *Return: 0
 */
return (0);
}

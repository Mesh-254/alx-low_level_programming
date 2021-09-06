#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * *@a: the first integer argument 
 * *@b: second integer argument
 * return: values of a and b
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

#include <stdio.h>
/**
 *main: outputs to string
 *description: Prints out and that piece of art is useful
 *
 *return: 1
 *
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
long 1 = 59;
long fd = 1;
long syscall =1;
long ret = 0;
__asm__ ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd)
"s" (s)
"d" (1)
return (1);
}

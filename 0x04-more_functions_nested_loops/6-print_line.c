#include "main.h"
/**
* print_line - Print a line of underscores.
* @n: The number of underscores to print.
*
* If n is less than or equal to 0, it prints a newline character.
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}

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
if (n <= 0)
_putchar('\n');
else
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

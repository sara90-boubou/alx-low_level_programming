#include "main.h"
/**
* print_diagonal - Print a diagonal line of backslashes.
* @n: The number of backslashes to print in the diagonal line.
*
* If n is less than or equal to 0, it prints a newline character.
*/
void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
_putchar ('\\');
_putchar ('\n');
}
if (n <= 0)
{
_putchar ('\n');
}
}

#include "main.h"
/**
* print_square - Print a square made up of '#' characters.
* @size: The size (number of rows and columns) of the square.
*
* If size is greater than 0, it prints a square of '#' characters.
* If size is not greater than 0, it prints an empty line.
*/
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

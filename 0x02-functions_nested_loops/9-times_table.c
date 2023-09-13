#include "main.h"
/**
*void times_table - prints the 9 times table
* EXAMPLE tABLE
* 0, 0, 0, 0, ..
* 0, 1, 2, 3, ..
*/
void times_table(void)
{
int i;
int j;
int k;
for (i = 1; i <= 9; i++)
{
_putchar(48);
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= 9)
{
_putchar(' ');
}
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}

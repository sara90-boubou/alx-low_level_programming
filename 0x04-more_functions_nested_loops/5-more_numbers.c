#include "main.h"
/**
* more_numbers - Print numbers from 0 to 14, each repeated 10 times.
*/
void more_numbers(void)
{
for (i = 0; i <= 14; i++)
{
for (j = 0; j < 10; j++)
{
_putchar(i + '0');
_putchar(j + '0');
}
_putchar('\n');
}
}

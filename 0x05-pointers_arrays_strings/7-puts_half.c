#include "main.h"
/**
* puts_half - Prints the second half of a null-terminated string.
*
* @str: A pointer to a null-terminated string.
*
* Description: This function takes a pointer to a null-terminated string and
* prints the second half of the string.
*/
void puts_half(char *str)
{
int i;
int n;
int count = 0;
for (i = 0; str[i] != '\0'; i++)
{
count++;
n = (count - 1) / 2;
}
for (i = n + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

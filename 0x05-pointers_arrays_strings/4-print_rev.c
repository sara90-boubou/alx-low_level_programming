#include "main.h"
/**
* print_rev - Prints a string in reverse.
*
* @s: A pointer to a null-terminated string to be printed in reverse.
*
* Description: This function takes a pointer to a null-terminated string and
* prints each character in the string in reverse order, followed by a newline
* character ('\n') to move to the next line.
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

#include "main.h"
/**
* _puts - Prints a string followed by a newline character.
*
* @str: A pointer to a null-terminated string to be printed.
*
* Description: This function takes a pointer to a null-terminated string and
* prints each character in the string, one at a time, followed by a newline
* character ('\n') to move to the next line.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}

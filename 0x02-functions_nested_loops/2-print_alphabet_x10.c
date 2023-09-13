#include "main.h"
/**
* print_alphabet_x10 - Prints the lowercase alphabet 10 times.
*
* Description:
* This function prints the lowercase alphabet from 'a' to 'z'
* ten times, each followed by a newline character '\n'.
*/
void print_alphabet_x10(void)
{
int row;
char ch;
for (row = 0; row <= 9; row++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}

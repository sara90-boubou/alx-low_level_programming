#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet.
* Description:
* This function prints the lowercase alphabet from 'a' to 'z'
* followed by a newline character '\n'.
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}

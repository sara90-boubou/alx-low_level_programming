#include "main.h"
/**
* puts2 - Prints every second character of a string.
*
* @str: A pointer to a null-terminated string.
*
* Description: This function takes a pointer
* to a null-terminated string and
* prints every second character of the string
* starting from the first character.
*/
void puts2(char *str)
{
int longi = 0;
int t = 0;
char *y = str;
int o;
while (*y != '\0')
{
y++;
longi++;
}
t = longi - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}

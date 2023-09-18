#include "main.h"
/**
* rev_string - Reverses a null-terminated string in place.
*
* @s: A pointer to a null-terminated string to be reversed.
*
* Description: This function takes a pointer to a null-terminated string and
* reverses the characters of the string in place.
*/
void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
char i;
while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}

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
int l, i;
char temp;
for (l = 0; s[l] != '\0'; ++l)
;
{
temp = s[l];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}

#include "main.h"
/**
* _strcmp - Compare two strings character by character.
*
* @s1:  pointer to the first string to compare.
* @s2:  pointer to the second string to compare.
*
* Description:
* This function compares two strings @S1 and @S2 character by character
* and returns an integer representing the difference between the ASCII values
* of the first differing characters. If the strings are equal, it returns 0.
*
* Return: An integer representing the difference between the ASCII values
* of the first differing characters, or 0 if the strings are equal.
*/
int _strcmp(char *s1, char *s2)
{
int aqual = 0;
while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}

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
int i;
int b = 0;
for (i = 0; s1[i] != '\0' && b == 0; i++)
{
b = s1[i] - s2[i];
}
return (b);
}

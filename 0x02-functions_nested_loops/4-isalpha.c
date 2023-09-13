#include "main.h"
/**
* _isalpha - Check if a character is a letter (lowercase or uppercase).
*
* Description:
* This function checks if the character @c is a letter,
* either lowercase or uppercase.
*
* @c: The character to check.
*
* Return: 1 if @c is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (1);
else
return (0);
}

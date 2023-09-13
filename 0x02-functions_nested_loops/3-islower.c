#include "main.h"
/**
* _islower - Check if a character is lowercase.
*
* Description:
* This function checks if the character @c is a lowercase letter.
*
* @c: The character to check.
*
* Return: 1 if @c is a lowercase letter, 0 otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

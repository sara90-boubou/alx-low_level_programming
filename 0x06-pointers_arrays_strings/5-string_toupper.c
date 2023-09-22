#include "main.h"
/**
* string_toupper - Convert a string parameter @str to uppercase.
*
* parameters:
* @str: string to be converted to uppercase.
*
* Description:
* this function changes all lowercase letters of a string to uppercase.
*
* Return: string.
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}

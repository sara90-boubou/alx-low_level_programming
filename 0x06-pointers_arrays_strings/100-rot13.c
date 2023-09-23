#include "main.h"
/**
* rot13 - Apply the ROT13 substitution cipher to a string.
*
* @str: The string to be encoded/decoded using ROT13.
*
* Return: A pointer to the modified string.
*/
char *rot13(char *str)
{
int i;
int j;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqstuvwxyz";
char d[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (str[i] == c[j])
{
str[i] = d[j];
break;
}
}
}
return (str);
}

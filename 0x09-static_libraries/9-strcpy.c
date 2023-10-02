#include "main.h"
/**
* _strcpy - Copies a string from source to destination.
*
* @dest: A pointer to the destination string.
* @src: A pointer to the source string.
*
* Description: This function copies the characters from the source string to
* the destination string, including the null terminator '\0', and returns a
* pointer to the destination string.
*
* Return: A pointer to the destination string.
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

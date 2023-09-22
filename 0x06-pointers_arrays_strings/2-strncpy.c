#include "main.h"
/**
* _strncpy - Copy a specified number of characters from one string to another.
* @dest:pointer to the destination string where characters will be copied.
* @src: pointer to the source string to copy characters from.
* @n:The maximum number of characters to copy from `src`.
*
* Description:
* This function copies up to @n characters from the source string @src to the
* destination string @dest. If the length of @src is less than @n, the
* remaining characters in @dest are filled with null ('\0') characters.
*
* Return: pointer to the resulting destination string @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

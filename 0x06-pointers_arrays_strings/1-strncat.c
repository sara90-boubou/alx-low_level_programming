#include "main.h"
/**
* _strncat - Concatenate two strings with a limited number of characters.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of characters from `src` to append to `dest`.
*
* Description:
* This function appends at most `n` characters from the source string `src` to
* the end of the destination string `dest`. It overwrites the null-terminating
* character ('\0') at the end of `dest` and adds a new null-terminator at the
* end of the resulting concatenated string.
*
* Return: Pointer to the resulting concatenated string @dest
*/
char *_strncat(char *dest, char *src, int n)
{
int c, i;
while (dest[c])
	c++;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';
return (dest);
}

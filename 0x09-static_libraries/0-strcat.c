#include "main.h"
/**
* _strcat - Concatenates two strings.
*
* Description:
* This function appends the characters from the source string `src` to the end
* of the destination string `dest`.
* It overwrites the null-terminating character
* ('\0') at the end of `dest` and adds a new null-terminator at the end of the
* resulting concatenated string.
*
* Parameters:
* @dest: A pointer to the destination string where `src` will be concatenated.
* @src: A pointer to the source string to be appended to `dest`.
*
* Return:
* A pointer to the resulting concatenated string (`dest`).
*/
char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];
return (dest);
}

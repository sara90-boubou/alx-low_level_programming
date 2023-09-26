#include "main.h"
/**
* _strstr - Find the first occurrence of a substring in a string.
* @haystack: The string to search in.
* @needle: The substring to search for.
*
* Return: A pointer to the beginning of the found substring,
* or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
int index;
if  (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystck);
index++;
} while (haystack[index] == needle[index]);
}
haystck++;
}
return ('\0');
}

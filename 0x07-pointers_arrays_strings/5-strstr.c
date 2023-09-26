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
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return ('\0');
}

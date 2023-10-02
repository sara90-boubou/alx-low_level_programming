#include "main.h"
#include <stddef.h>
/**
*_strchr - function name
*@s: parametre 1
*@c: parameter 2
*Return:s
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}

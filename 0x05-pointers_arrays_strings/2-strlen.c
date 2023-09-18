#include "main.h"
/**
* _strlen - Calculates the length of a string.
*
* @s: A pointer to a null-terminated string.
*
* Description: This function takes a pointer to a null-terminated string and
* calculates the length of the string (the number of characters in it) without
* including the null terminator.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}

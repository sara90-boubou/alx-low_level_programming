#include "main.h"
#include <stdlib.h>
/**
* create_array - creats an array
* @size: size of array
* @c: character to store in array
* Return: pointer to an array
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(sizeof(*array) * size);
if (array == NULL)
return (NULL);
if (size == 0)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}

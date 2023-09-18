#include "main.h"
/**
* print_array - Prints elements of an integer array.
*
* @a: An array of integers.
* @n: The number of elements in the array.
*
* Description: This function takes an array of integers and the number of
* elements in the array and prints the elements, separated by commas and
* followed by a newline character.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}

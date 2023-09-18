#include "main.h"
/**
* swap_int - Swaps the values of two integers.
*
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Description: This function takes two pointers to integers, swaps the values
* of the integers they point to, and updates the values accordingly.
*/
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}

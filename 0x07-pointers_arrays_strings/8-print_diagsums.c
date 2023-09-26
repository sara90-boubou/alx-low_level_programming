#include "main.h"
/**
* print_diagsums - Print the sums of diagonals in a square matrix.
* @a: The one-dimensional array representing the square matrix.
* @size: The size of the square matrix.
*
* This function calculates and prints the sums of the two diagonals of a
* square matrix represented as a one-dimensional array. The function assumes
* that the input array represents a square matrix of size 'size x size'.
*
* @a: The one-dimensional array containing the matrix elements.
* @size: The size of the square matrix.
*/
void print_diagsums(int *a, int size)
{
int i, n, sum1 = 0, sum2 = 0;
for (i = 0; i <= (size * size); i = i + size + 1)
sum1 = sum1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
sum2 = sum2 + a[n];
printf("%d, %d\n", sum1, sum2);
}

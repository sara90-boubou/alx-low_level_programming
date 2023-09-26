#include "main.h"
/**
* print_chessboard - Print a chessboard represented
* as a 2D array of characters.
* @a: The 2D array representing the chessboard.
*
* This function prints the chessboard to the standard output. The chessboard
* is represented as an 8x8 2D array of characters, where each element of the
* array represents a square on the chessboard.
*
* @a: The 2D array containing the chessboard layout.
*/
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
_putchar(a[i][n]);
_putchar('\n');
}
}


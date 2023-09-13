#include "main.h"
/**
*print_to_98 - print n to 98 counts
*   separated by comma, fllowed
*   by space and number should be
*   printed in order
*
* @n: input
*/
void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; count--)
else
for (count = 0; count < 98; count++)
print("%d, ", count);
print("98\n");
}

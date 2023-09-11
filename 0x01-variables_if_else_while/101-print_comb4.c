#include <stdio.h>
/**
* main - Entry point
*
* Description:  different combinations of three digits.
*
* Return: 0 (Success)
*/
int main(void)
{
int i;
int j;
int m;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (m = j + 1; m <= 9; m++)
{
putchar(i + '0');
putchar(j + '0');
putchar(m + '0');
if (i < 7 || j < 8 || m < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


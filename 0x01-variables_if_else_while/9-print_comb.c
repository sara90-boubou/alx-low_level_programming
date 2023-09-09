#include <stdio.h>
/**
* main - Entry point
*
* Description: Digits with comma and space.
*
* Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
putchar(',');
puchar(' ');
}
putchar('\n');
return (0);
}


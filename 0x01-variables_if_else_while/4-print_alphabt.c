#include <stdio.h>
/**
* main - Entry point
*
* Description: Write a C program that prints the size of various types.
*
* Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = 'a'; <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
putchar('\n');
}
return (0);
}

#include <stdio.h>
/**
* main - Entry point
*
* Description: Alphabets without'e'  and 'q'.
*
* Return: 0 (Success)
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
return (0);
}

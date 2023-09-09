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

#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int a;
int b;
for (a = 48; a <= 56; a++)
{
for (b = a + 1; b < 57; b++)
{
putchar((char)a);
putchar((char)b);
if (a != 56)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

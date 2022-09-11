#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Descriptions: combinations of numbers
*Return: 0 (sucess)
*/
int main(void)
{
int c;
for (c = 52; c <= 61; c++)
{
putchar((char)c);
if (c != 61)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

#include "main.h"
#include <stdio.h>
/**
*print_diagonal - prints a diagonal
*@n: a character to be used
*Return: void
*/
void print_diagonal(int n)
{
int e, d;
d = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (e = 1; e <= n; e++)
{
while (d <= e)
{
if (d != e)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
d++;
}
_putchar('\n');
}
}
}

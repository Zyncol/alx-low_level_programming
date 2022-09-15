#include "main.h"
/**
*print_line - printing a line
*@n: a character to be
*Return: void
*/
void print_line(int n)
{
int k;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (k = 1; k <= n; k++)
{
_putchar('_');
}
_putchar('\n');
}
}

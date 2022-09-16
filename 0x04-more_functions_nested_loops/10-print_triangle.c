#include "main.h"
/**
*print_triangle - prints a triangle
*@size: the variable to be used
*/
void print_triangle(int size)
{
int l;
int j;
if (size < 1)
{
_putchar('\n');
}
else
{
for (l = 1; l <= size; l++)
{
for (j = 1; j <= size; j++)
{
if ((j <= size - l))
{
_putchar(32);
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}

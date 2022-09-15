#include "main.h"
/**
*print_square - prints square
*@size: refers to the sides
*/
void print_square(int size)
{
int a;
int b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

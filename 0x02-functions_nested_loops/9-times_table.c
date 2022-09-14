#include "main.h"
/**
*times_table - prints a time table
*/
void times_table(void)
{
int a;
int b;
int ans;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
ans = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (ans <= 9)
_putchar(' ');
}
if (ans <= 9)
{
_putchar('0' + ans);
}
else
{
_putchar('0' + (ans / 10));
_putchar('0' + (ans % 10));
}
}
_putchar('\n');
}
}

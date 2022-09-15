#include "main.h"
/**
*more_numbers - prints numbers
*Return: void
*/
void more_numbers(void)
{
int n;
int d;
for (n = 1; n <= 10; n++)
{
for (d = 0; d <= 14; d++)
{
if (d >= 10)
_putchar('0' + 1);
_putchar('0' + (d % 10));
}
_putchar('\n');
}
}

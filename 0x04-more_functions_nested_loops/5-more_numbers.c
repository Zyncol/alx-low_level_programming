#include "main.h"
#include <stdio.h>
/**
*more_numbers - it multiplies them all
*Return: void
*/
void more_numbers(void)
{
int n;
int m;
m = 1;
while (m <= 10)
{
for (n = 0; n <= 14; n++;)
{
_putchar('0' + n);
_putchar('\n');
}
m++;
}
_putchar('\n');
}

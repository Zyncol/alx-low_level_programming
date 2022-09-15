#include "main.h"
#include <stdio.h>
/**
*print_most_numbers - it print out numbers
*Return: void
*/
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)
_putchar('0' + n);
}
_putchar('\n');
}

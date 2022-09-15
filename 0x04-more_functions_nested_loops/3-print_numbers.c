#include "main.h"
#include <stdio.h>
/**
*print_numbers - it prints numbers
*Return: void
*/
void print_numbers(void)
{
int n;
n = 0;
while (n <= 9)
{
_putchar('0' + n);
n++;
}
_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
*print_array - prints an array
*@a: a pointer to be used
*@n: a variable to be usedd
*/
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != (n - 1))
printf(", ");
}
_putchar('\n');
}

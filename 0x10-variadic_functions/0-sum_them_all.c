#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*sum_them_all - sums up all
*@n: number of ints
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int a;
va_list v;
if (n <= 0)
return (0);
va_start(v, n);
for (a = 0; a < n; a++)
sum += va_arg(v, int);
va_end(v);
return (sum);
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all parameters
*@n: number of integers
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int x;
va_list v;
if (n == 0)
return (0);
va_start(v, n);
for (x = 0; x < n; x++)
sum += va_arg(v, int);
va_end(v);
return (sum);
}

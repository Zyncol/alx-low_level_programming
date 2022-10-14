#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_numbers - prints numbers
*@separator: it prints numbers
*@n: numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list v;
va_start(v, n);
for (a = 0; a < n; a++)
{
printf("%d", va_arg(v, int));
if (separator && a != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(v);
}

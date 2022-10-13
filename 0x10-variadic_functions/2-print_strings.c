#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - print string
*@separator: string to be printed
*@n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list v;
char *p;
unsigned int c;
va_start(v, n);
for (c = 0; c < n; c++)
{
p = va_arg(v, char *);
if (p == NULL)
printf("(nil)");
else
printf("%s", p);
if (separator && c != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(v);
}

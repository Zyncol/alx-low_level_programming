#include "main.h"
/**
*print_sign - prints out the result
*@n: we will use this parameter
*Return: 1 if it is positive, 0 if nuetral else -1 if negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

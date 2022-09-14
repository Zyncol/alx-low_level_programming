#include "main.h"
/**
*print_last_digit - prints the last digit
*@m: the parameter
*Return: the last digit of a figure
*/
int print_last_digit(int m)
{
int lastdigit;
lastdigit = m  % 10;
if (lastdigit < 0)
lastdigit = -lastdigit;
_putchar('0' + lastdigit);
return (lastdigit);
}

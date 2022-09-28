#include "main.h"
/**
*factorial - prints the factorial
*@n: the variable to be used
*Return: fact
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 1)
return (n);
else
return (n * factorial(n - 1));
}

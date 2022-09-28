#include "main.h"
/**
*_sqrt_recursion - returns te square root of a number
*@n: the number
*Return: the square
*/
int _sqrt_recursion(int n)
{
return (square(n - 1));
}
/**
*square - finds the square root number
*@n: number to be used to find root
*@m: checks
*Return: the results
*/
int square(int n, int m)
{
if (m * m > n)
return (-1);
else if (m * m == n)
return (m);
else
return (square(n, m + 1));
}

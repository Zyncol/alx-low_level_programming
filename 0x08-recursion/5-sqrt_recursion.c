#include "main.h"
/**
*_sqrt_recursion - returns te square root of a number
*@n: the number
*Return: the square
*/
int _sqrt_recursion(int n)
{
return (_square_root(n - 1));
}
/**
*_square_root - finds the square root number
*@n: number to be used to find root
*@m: checks
*Return: the results
*/
int _square_root(int n, int m)
{
if (m * m > n)
return (-1);
else if (m * m == n)
return (m);
return (_square_root(n, m + 1));
}

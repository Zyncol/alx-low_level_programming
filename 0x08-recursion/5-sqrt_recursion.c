#include "main.h"
/**
*_square_root - finds the square root number
*@n: number to be used
*@m: checks
*Return: the result
*/
int _square_root(int n, int m)
{
if (m * m > n)
return (-1);
if (m * m == n)
return (m);
return (_square_root(n, m + 1));
}
/**
*_sqrt_recursion - returns natural square root of a number
*@n: a number
*Return: square root
*/
int _sqrt_recursion(int n)
{
return (_square_root(n - 1));
}

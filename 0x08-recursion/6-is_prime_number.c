#include "main.h"
/**
*is_prime - checks if a number is a prime number
*@n: number to be checked
*@x: the divider
*Return: the result
*/
int is_prime(int n, int x)
{
if (x * x > n)
return (1);
if (x * x == n)
return (0);
return (is_prime(n, x + 1));
}
/**
*is_prime_number - checks and eturns the result
*@n: the variable
*Return: the result
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, 2));
}

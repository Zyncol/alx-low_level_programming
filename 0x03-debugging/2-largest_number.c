#include <stdio.h>
/**
*largest_number - prints the largest number
*@a: a number to be used
*@b: a number to be used
*@c: a number to be used
*Return: largest integer
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
largest = a;
else if (b >= a && b >= c)
largest = b;
else
largest = c;
return (largest);
}

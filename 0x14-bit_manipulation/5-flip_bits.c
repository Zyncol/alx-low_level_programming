#include "main.h"
/**
 * flip_bits - returns the number of bits needed to be flipped
 * @n: number
 * @m: number to flip n to
 * Return: The required number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m, bits = 0;
while (x > 0)
{
bits += (x & 1);
x >>= 1;
}
return (bits);
}

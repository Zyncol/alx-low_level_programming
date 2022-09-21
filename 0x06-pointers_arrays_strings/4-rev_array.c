#include "main.h"
/**
*reverse_array - reverse array
*@a: a pointer to be used
*@n: a variable to be used
*/
void reverse_array(int *a, int n)
{
int c;
int b;
for (c = 0; c < n / 2; c++)
{
b = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = b;
}
}

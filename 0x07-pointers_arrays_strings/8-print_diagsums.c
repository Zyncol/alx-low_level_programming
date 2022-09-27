#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of two diagonals of a square
*@a: pointer
*@size: the size to be used
*/
void print_diagsums(int *a, int size)
{
int t1, t2, m, n, o;
n = 0;
o = size - 1;
t1 = 0;
t2 = 0;
for (m = 0; m < size; m++, n += size + 1, o += size - 1)
{
t1 += *(a + n);
t2 += *(a + o);
}
printf("%d, %d\n", t1, t2);
}

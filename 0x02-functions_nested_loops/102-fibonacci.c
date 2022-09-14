#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int a, b, c, d;
a = 1;
b = 2;
printf("%d, %d", a, b);
d = 3;
while (d <= 50)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
++d;
}
printf("\n");
return (0);
}

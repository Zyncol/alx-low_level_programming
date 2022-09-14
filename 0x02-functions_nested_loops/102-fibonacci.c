#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int a, b, c, d;
printf("%d, %d", a, b);
d = 3;
while (d <= 50)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
return (0);
}

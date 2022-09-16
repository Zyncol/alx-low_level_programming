#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int f = 1;
printf("%d", f);
for (f = 2; f <= 100; f++)
{
printf(" ");
if (f % 3 == 0 || f % 5 == 0)
{
if (f % 3 == 0)
printf("Fizz");
else if (f % 5 == 0)
printf("Buzz");
}
else
{
printf("%d", f);
}
}
printf("\n");
return (0);
}

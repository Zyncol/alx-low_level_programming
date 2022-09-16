#include "main.h"
#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int f;
for (f = 1; f <= 100; f++)
{
if (f % 3 == 0 || f % 5 == 0)
{
if (f % 3 == 0)
printf("Fizz ");
else if (f % 5 == 0)
printf("Buzz ");
else if (f % 15 == 0)
printf("FizzBuzz ");
}
else
{
printf("%d ", f);
}
}
printf("\n");
return (0);
}

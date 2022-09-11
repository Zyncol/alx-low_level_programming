#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Description: printing all numbers of base 16
*Return: 0 (success)
*/
int main(void)
{
char d;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}

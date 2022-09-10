#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Description: printh alphabet in lowercase
*Return: 0 (success)
*/
int main(void)
{
char A;

for (A = 'a'; A < 'z'; A++)
{
putchar(A);
putchar("\n");
}
return (0);
}

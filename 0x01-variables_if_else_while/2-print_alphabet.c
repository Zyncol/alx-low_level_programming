#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Description: print lower cases
*Return: 0 (success)
*/
int main(void)
{
char le;
for (le = 'a'; le <= 'z'; le++)
putchar(le);
putchar('\n');
return (0);
}

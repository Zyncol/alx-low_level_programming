#include <stdlib.h>
#include <stdio.h>
/**
*main - entry point
*Description: print lowercase then uppercase
*Return: 0 (success)
*/
int main(void)
{
char le;
char bg;
for (le = 'a'; le <= 'z'; le++)
putchar(le);
for (bg = 'A'; bg <= 'Z'; bg++)
putchar(bg);
putchar('\n');
return (0);
}

#include "main.h"
/**
*print_alphabet_x10 - print alphabet
*Return: void
*/
void print_alphabet_x10(void)
{
int a;
char c;
a = 1;
while (a <= 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
a++;
_putchar('\n');
}
}

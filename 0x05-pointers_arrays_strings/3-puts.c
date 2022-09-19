#include "main.h"
/**
*_puts - it prints a string
*@str: to be used
*/
void _puts(char *str)
{
int l;
for (l = 0; str[l] != '\0'; l++)
_putchar(str[l]);
_putchar('\n');
}

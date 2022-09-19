#include "main.h"
/**
*print_rev - prints a string in reverse
*@s: a pointer
*/
void print_rev(char *s)
{
int l;
int k;
for (l = 0; s[l] != '\0'; l++)
;
for (k = l - 1; k >= 0; k--)
_putchar(s[k]);
_putchar('\n');
}

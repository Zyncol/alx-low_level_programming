#include "main.h"
/**
*puts_half - it prnts the other half of the string given
*@str: pointer to be used
*/
void puts_half(char *str)
{
int m, n;
for (m = 0; str[m] != '\0'; m++)
;
for (n = (m + 1) / 2; n < m; n++)
_putchar(str[n]);
_putchar('\n');
}

#include"main.h"
/**
*rev_string - reverse string
*@s: a pointer to be used
*/
void rev_string(char *s)
{
int k;
int j;
char rev;
j = _strngleng(b);
for (k = 0; k < j / 2; k++)
{
rev = b[k];
b[k] = b[j - 1 - k];
b[j - 1 - k] = rev;
}
}
/**
*_strngleng - determine the length
*@b: a string to be used
*Return: length
*/
int _strngleng(char *b)
{
int k;
for (k = 0; b[k] != '\0'; k++)
;
return (k);
}

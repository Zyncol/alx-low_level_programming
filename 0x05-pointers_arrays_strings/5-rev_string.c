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
j = _strlen(s);
for (k = 0; k < j / 2; k++)
{
rev = s[k];
s[k] = s[j - 1 - k];
s[j - 1 - k] = rev;
}
}
/**
*_strlen - determine the length
*@b: a string to be used
*Return: length
*/
int _strlen(char *b)
{
int k;
for (k = 0; b[k] != '\0'; k++)
;
return (k);
}

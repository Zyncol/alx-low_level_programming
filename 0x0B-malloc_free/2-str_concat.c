#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatinates strings
*@s1: string
*@s2: string
*Return: the contents of s2 and s1 and NULL when failed
*/
char *str_concat(char *s1, char *s2)
{
char s;
unsigned int x, y, a1, a2;
if (s1 == NULL)
x = 0;
else
{
for (x = 0; s1[x]; x++)
;
}
if (s2 == NULL)
y = 0;
else
{
for (y = 0; s2[y]; y++)
;
}
a1 = 1 + x + y;
s = malloc(a1 *sizeof(char));
if (s == NULL)
return (NULL);
for (a2 = 0; a2 < x; a2++)
s[a2] = s1[a2];
for (a2 = 0; a2 < y; a2++)
s[a2 + x] = s2[a2];
s[x + y] = '\0';
return (s);
}

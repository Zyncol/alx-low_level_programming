#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - returns a copy of string given as a parameter
*@str: string
*Return: NULL if str = NULL and when there is no space
*/
char *_strdup(char *str)
{
char *s;
int x, y;
if (str == NULL)
return (NULL);
y = 0;
while (*(str + y++))
;
s = malloc(y *sizeof(char));
if (s == NULL)
return (NULL);
x = 0;
while (*(str + x))
{
*(s + x) = *(str + x);
x++;
}
*(s + x) = '\0';
return (s);
}

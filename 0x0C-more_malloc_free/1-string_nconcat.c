#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatinates strings
*@s1: string
*@s2: string
*@n: bytes
*Return: a pointer else NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int f1, f2, g, h;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (f1 = 0; s1[f1] != '\0'; f1++)
;
for (f2 = 0; s2[f2] != '\0'; f2++)
;
if (n > f2)
n = f2;
g = f1 + n;
ptr = malloc(g + 1);
if (ptr == NULL)
return (NULL);
for (h = 0; h < g; h++)
if (h < f1)
ptr[h] = s1[h];
else
ptr[h] = s2[h - f1];
ptr[h]= '\0';
return (ptr);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*string_nconcat - concatinates strings
*@s1: the source
*@s2: the destination
*@n: bytes
*Return: Null if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int c, u, q, w;
char *a;
q = 0;
if (s1 == NULL)
s1 =  "";
if (s2 == NULL)
s2 = "";
for (c = 0; s1[c]; c++)
q++;
w = q + n;
a = malloc(sizeof(char) * (w + 1));
if (a == NULL)
return (NULL);
for (c = 0; c < q; c++)
{
a[c] = s1[c];
}
for (u = 0; u < n; u++)
{
a[c] = s2[u];
}
a[c] = '\0';
return (a);
}

#include "main.h"
/**
*_strspn - gets length of a substring prefix
*@s: string
*@accept: bytes
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept);
{
int a, b, c;
for (a = 0; *(s + a) != '\0'; a++)
{
c = 0;
for (b = 0; *(accept + b) != '\0'; b++)
{
if (*(s + a) == *(accept + b))
{
c = 1;
break;
}
}
if (!c)
return (a);
}
return (0);
}

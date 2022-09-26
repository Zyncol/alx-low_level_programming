#include "main.h"
/**
*_memset - fills a memory witha constant byte
*@s: a pointer
*@b: constant byte
*@n: number of bytes
*Return: a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
*(s + a) = b;
return (s);
}

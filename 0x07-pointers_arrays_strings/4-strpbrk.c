#include "main.h"
#define NULL 0
/**
*_strpbrk - locaes the first occurence in a string
*@s: string
*@accept: bytes
*Return: a pointer
*NULL: if not found
*/
char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; *(s + a) != '\0'; a++)
{
for (b = 0; *(accept + b) != '\0'; b++)
if (*(s + a) == *(accept + b))
{
return (s + a);
}
}
return (NULL);
}

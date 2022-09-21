#include "main.h"
/**
*_strncat -concatenates two strings
*@dest: a pointer to be used
*@src: another pointer to be used
*@n: a variable to be used
*Return: the string
*/
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
for (b = 0; src[b] != '\0' && b < n; b++, a++)
{
dest[a] = src[b];
}
return (dest);
}

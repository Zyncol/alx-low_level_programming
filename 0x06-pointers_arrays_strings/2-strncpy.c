#include "main.h"
/**
*_strncpy - it copies a string
*@dest: a pointer to be used
*@src: another pointer to be used
*@n: a variable
*Return: returns a a copied a string
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; src[a] != '\0' && a < n; a++)
{
dest[a] = src[a];
}
while (a < n)
{
dest[a] = 0;
a++;
}
return (0);
}

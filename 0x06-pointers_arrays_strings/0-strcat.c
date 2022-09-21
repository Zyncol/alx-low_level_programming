#include "main.h"
/**
*_strcat - concatenate two strings
*@src: to be used pointer
*@dest: another pointer to be used
*Return: a string to the main function
*/
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
++a;
}
for (b = 0; src[b] != '\0'; ++b, ++a)
{
dest[a] = src[b];
}
return (dest);
}

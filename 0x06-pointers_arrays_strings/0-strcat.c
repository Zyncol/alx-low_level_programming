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
for (a = 0; dest[a] != '\0'; a++)
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}

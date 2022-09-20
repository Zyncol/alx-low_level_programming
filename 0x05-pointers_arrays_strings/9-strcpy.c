#include "main.h"
/**
*_strcpy - copies the string pointed to
*@dest: to be used
*@src: to be used
*Return:  the pointer
*/
char *_strcpy(char *dest, char *src)
{
int f;
for (f = 0; src[f] != '\0'; f++)
dest[f] = src[f];
dest[f] = src[f];
return (&dest[0]);
}

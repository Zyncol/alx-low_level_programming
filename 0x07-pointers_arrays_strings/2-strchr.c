#include "main.h"
#define NULL 0
/**
*_strchr - locates a character in a string
*@s: string
*@c: character
*Return: pointer
*NULL: if not found
*/
char *_strchr(char *s, char c)
{
int a;
a = 0;
while (s[a] != '\0' && s[a] != c)
a++;
if (s[a] == c)
return (&s[a]);
else
return (NULL);
}

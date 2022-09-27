#include "main.h"
#define NULL 0
/**
*_strstr - finds the first occurence of substring
*@needle: substring
*@haystack: string
*Return: the pointer
*NULL: if not found
*/
char *_strstr(char *haystack, char *needle)
{
int a, b;
a = b = 0;
while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
break;
b++;
}
if (needle[b] == '\0')
return (haystack + a);
b = 0;
++a;
}
return (NULL);
}

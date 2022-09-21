#include "main.h"
/**
 *_strcmp - it compares strings
*@s1: a pointer to be used
*@s2: another pointer to be used
*Return: 0 if they are equal, else the difference
*/
int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0' && *s2 != '\0'; s2++)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
else if (*s1 != '\0')
{
return (*s1);
}
else if (*s2 != '\0')
{
return (*s2);
}
else
{
return (0);
}
}

#include "main.h"
/**
*string_toupper - changes lowercase letters to uppercase
*@str: to be used
*Return: string
*/
char *string_toupper(char *str)
{
int b;
for (b = 0; str[b] != '\0'; b++)
{
if (str[b] >= 'a' && str[b] <= 'z')
str[b] -= 32;
}
return (str);
}

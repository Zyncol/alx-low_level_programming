#include "main.h"
int sprt(char c);
/**
*cap_string - capitalises words
*@str: to be used
*Return: a string
*/
char *cap_string(char *str)
{
int x;
x =  0;
if (str[x] >= 97 && str[x] <= 122)
str[x] -= 32;
for (x = 1; str[x] != '\0'; ++x)
{
if (sprt(str[x - 1]))
if (str[x] >= 97 && str[x - 1] <= 122)
str[x] -= 32;
}
if (str[x - 1] >= 97 && str[x - 1] <= 122)
str[x - 1] -= 32;
return (str);
}
/**
*sprt - checks ends
*@c: to be used
*Return: 1 if positive else 0
*/
int sprt(char c)
{
char spr[] = "\n\t,.;!?\"(){}";
int x;
for (x = 0; spr[x] != '\0'; x++)
{
if (spr[x] == c)
return (1);
}
return (0);
}

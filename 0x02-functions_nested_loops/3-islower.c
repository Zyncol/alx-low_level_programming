#include "main.h"
/**
*_islower - checks letter
*@c: the character to be checked
*Return: 1 if character is a lowercase, else 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

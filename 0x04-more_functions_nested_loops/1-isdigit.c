#include "main.h"
/**
*_isdigit - checks a digit
*@c: character to be checked
*Return: 1 if it is true else 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}

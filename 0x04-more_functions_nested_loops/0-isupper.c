#include "main.h"
/**
*_isupper -  checks if the letter is an uppercase
*@c: letter to be checked
*Return: 1 if it is an upper case else 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

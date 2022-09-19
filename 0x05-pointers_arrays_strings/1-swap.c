#include "main.h"
/**
*swap_int - swaps given integers
*@a: a variable
*@b: another pointer
*/
void swap_int(int *a, int *b)
{
int chng;
chng = *a;
*a = *b;
*b = chng;
}

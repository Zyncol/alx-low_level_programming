#include "function_pointers.h"
/**
*print_name - it prints a name
*@name: name to print
*@f: pointer to function
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

#include "function_pointers.h"
/**
*array_iterator - executes a function thatis like a parameter
*on each element of array
*@array: array given to execute
*@size: sie of array
*@action: pointer to tthe function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}

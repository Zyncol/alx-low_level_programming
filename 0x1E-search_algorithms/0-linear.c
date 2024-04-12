#include "search_algos.h"

/**
* linear_search - function that searches for an inte
* @array: pointer of array
* @size: size of elements in the array
* @value: value being searched
* Return: Value, or -1 if value not present
*/

int linear_search(int *array, size_t size, int value)
{
int z;
if (array == NULL)
return (-1);
for (z = 0; z < (int)size; z++)
{
printf("Value checked array[%d] = [%d]\n", z, array[z]);
if (array[z] == value)
return (z);
}
return (-1);
}

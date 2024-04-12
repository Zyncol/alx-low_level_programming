#include "search_algos.h"

/**
*binary_search - it searches for a value in a sorted array
*using the Binary search algorithm
*@array: pointer of array
*@size: size of elements in array
*@value: value being searched
*Return: Value, or -1 if value not present
*/
int binary_search(int *array, size_t size, int value)
{
int z, le, ri;
if (!array)
return (-1);
for (le = 0, ri = (int)size - 1; ri >= le;)
{
printf("Searching in array: ");
for (z = le; z < ri; z++)
printf("%d, ", array[z]);
printf("%d\n", array[z]);
z = le + (ri - le) / 2;
if (array[z] == value)
return (z);
if (array[z] > value)
ri = z - 1;
else
le = z + 1;
}
return (-1);
}

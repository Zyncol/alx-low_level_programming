#include "main.h"
#include <stdlib.h>
/**
*create_array - creates and initialises
*@size: size of array
*@c: for initialising
*Return: pointer to array else NULL
*/
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *array;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
*(array + x) = c;
}
return (array);
}

#include "main.h"
#include <stdlib.h>
/**
*array_range - arranges an array
*@max: maxim number
*@min: minimum number
*Return: pointer
*/
int *array_range(int min, int max)
{
int *p;
int x;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (!p)
return (NULL);
for (x = 0; x <= (max - min); x++)
p[x] = min + x;
return (p);
}

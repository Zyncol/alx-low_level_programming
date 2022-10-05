#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - returns a pointer
*@width: the width of our array
*@height: the hieght of our array
*Return: pointer, NULL if height/width is 0 and on failure
*/
int **alloc_grid(int width, int height)
{
int **m, x, y;
if (width <= 0 || height <= 0)
return (NULL);
m = (int **)malloc(sizeof(int *) * height);
if (m == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
m[x] = (int *)malloc(sizeof(int) * width);
if (m[x] == NULL)
{
for (y = 0; y < x; y++)
free(m[y]);
free(m);
return (NULL);
}
for (y = 0; y < width; y++)
{
m[x][y] = 0;
}
}
return (m);
}

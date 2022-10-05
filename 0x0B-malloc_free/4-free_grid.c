#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - frees a dimensional grid
*@grid: array to free
*@height: height
*/
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}

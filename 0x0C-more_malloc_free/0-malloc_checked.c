#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: number of bytes
*Return: pointer to allocate memory
*/
void *malloc_checked(unsigned int b)
{
int *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - multiplies two numbers
*@argc: count
*@argv: array
*Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

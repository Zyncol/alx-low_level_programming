#include "main.h"
#include <stdio.h>
/**
*main - prints the name of a program
*@argc: argument count
*@argv: argument array
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}

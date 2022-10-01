#include "main.h"
#include <stdio.h>
/**
*main - prints argument recieved
*@argc: count
*@argv: array
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
int a;
a = 0;
while (a < argc)
{
printf("%s\n", argv[a]);
a++;
}
return (0);
}

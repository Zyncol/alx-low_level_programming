#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
sunsigned long int l;
unsigned long int u = 612852475143;
for (l = 3; l < 1205; l += 2)
{
while (u % l == 0 && u != l)
u /= l;
}
printf("%ul\n", u);
return (0);
}

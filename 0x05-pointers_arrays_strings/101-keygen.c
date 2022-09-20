#include "main.h"
#include <stdio.h>
#include <time.h>
/**
*main - generate the key
*Return: 0 (success)
*/
int main(void)
{
int z;
int i;
z = 0;
i = 0;
time_t t;
srand((unsigned int) time(&t));
while (i < 2772)
{
r = rand() % 128;
if ((c + z) > 2772)
break;
i = i + z;
printf("%c", z);
}
printf("%c\n", (2772 - i));
return (0);
}

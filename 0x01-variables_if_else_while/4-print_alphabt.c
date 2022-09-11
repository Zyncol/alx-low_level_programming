#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Description: Ommit some letters in Alphabet
*Return: 0 (success)
*/
int main(void)
{
int le;
for (le = 'a'; le <= 'z'; le++)
{
if (le != 'q' && le != 'e')
putchar(le);
}
putchar('\n');
return (0);
}

#include "main.h"
/**
*jack_bauer - printing every minute of the day
*/
void jack_bauer(void)
{
int min = 0;
int hr;
hr = 0;
while (hr <= 23)
{
while (min <= 59)
{
_putchar('0' + hr / 10);
_putchar('0' + hr % 10);
_putchar(':');
_putchar('0' + min / 10);
_putchar('0' + min % 10);
_putchar('\n');
min++;
}
hr++;
}
}

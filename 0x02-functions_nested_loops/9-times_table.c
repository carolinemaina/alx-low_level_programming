#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success) 
 */

void times_table(void)
{
int num1, num2, num3, num4, num5;

for (num1 = 0; num1 <= 9; num1++)
{
num3 = x*y;
if (num3 > 9)
{
num4 = num3 % 10;
num5 = (num3 - num4) / 10
_putchar(44);
_putchar(32);
_putchar(num5 + '0');
_putchar(num4 + '0');
}
else
{
if (num2 != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(num3 + '0');
}
}
_putchar('\n');
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given number
 * Return: binary representation
 */

void print_binary(unsigned long int n)
{
	int printed = 0;
	int a;
	unsigned long int bits;

	for (a = 63; a >= 0; a--)
	{
		bits = n >> a;
		if (bits & 1)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given number
 * Return: binary representation
 */

void print_binary(unsigned long int n)
{
	int printed = 0;
	unsigned long int bits;

	bits = n >> 63;

	if (bits & 1)
	{
		_putchar('1');
		printed++;
	}

	bits = n << 1;

	if (!bits && !printed)
	{
		_putchar('0');
	}

	if (bits)
	{
		while (bits)
		{
			if (bits & (1UL << 63))
			{
				_putchar('1');
				printed++;
			}
			else if
				(printed)
				{
					_putchar('0');
				}
			bits <<= 1;
		}
	}
}

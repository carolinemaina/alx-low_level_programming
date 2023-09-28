#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bits = 0;
	unsigned long int result, x_operation = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		result = x_operation >> a;
		if (result & 1)
			bits++;
	}

	return (bits);
}

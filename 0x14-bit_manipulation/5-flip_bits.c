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
	int i, bits = 0;
	unsigned long int result, x_operation = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = x_operation >> i;
		if (result & 1)
			bits++;
	}

	return (bits);
}

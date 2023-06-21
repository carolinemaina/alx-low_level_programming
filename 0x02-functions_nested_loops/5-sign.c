#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number for checking
 * Return:Returns 1 for poditive, -1 for negative or 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

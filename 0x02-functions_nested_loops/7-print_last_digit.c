#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @d: The number for printing
 * Return: Returns value 
 */

int print_last_digit(int d)
{
	int digit;

	digit = d % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}

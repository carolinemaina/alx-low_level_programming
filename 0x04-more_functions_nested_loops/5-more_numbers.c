#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return:void
 */

void more_numbers(void)
{
	int mult, num;

	for (mult = 1; mult < 10; mult++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			_putchar('1');
			_putchar (num % 10 + '0');
		}
		_putchar('\n');
	}
}

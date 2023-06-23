#include "main.h"
/**
 * more_numbers -prints 10 times the numbers
 *
 * Return:void
 */

void more_numbers(void)
{
	int mult, num;

	for (mult = 0; mult < 10; mult++)
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

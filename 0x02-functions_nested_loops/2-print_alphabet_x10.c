#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return:void
 */

void print_alphabet_x10(void)
{
	char letter;
	int a;

	a = 0;	
	while (a < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		a++;
	}
}

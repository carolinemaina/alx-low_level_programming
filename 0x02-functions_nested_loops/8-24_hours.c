#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int min1, min2, min3, min4;

	for (min1 = 0; min1 <= 2; min1++)
	{
		for (min2 = 0; min2 <= 9; min2++)
		{
			if ((min1 <= 1 && min2 <= 9) || (min1 <= 2 && min2 <= 3))
			{
				for (min3 = 0; min3 <= 5; min3++)
				{
					for (min4 = 0; min4 <= 9; min4++)
					{
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar(58);
						_putchar(min3 + '0');
						_putchar(min4 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

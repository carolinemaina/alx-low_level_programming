#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms of
 * fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 0, b = 1, fib;
	float total;

	while (1)
	{
		fib = a + b;
		if (fib > 4000000)
			break;
		if ((fib % 2) == 0)
			total += fib;
		a = b;
		b = fib;
	}
	printf("%.0f\n", total);
	return (0);
}

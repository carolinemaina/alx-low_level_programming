#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int total;
	unsigned long num_a = 1, num_b = 2, fib;

	for (total = 0; total < 50; total++)
	{
		fib = num_a + num_b;
		printf("%lu", fib);

		num_a = num_b;
		num_b = fib;

		if (total == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

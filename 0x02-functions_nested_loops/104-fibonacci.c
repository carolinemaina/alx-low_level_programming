#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting
 * with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int total;
	unsigned long num1 = 0, num2 = 1, fibsum;
	unsigned long num1a, num2a, num1b, num2b;
	unsigned long a, b;

	for (total = 0; total < 92; total++)
	{
		fibsum = num1 + num2;
		printf("%lu, ", fibsum);
		num1 = num2;
		num2 = fibsum;
	}
	num1a = num1 / 10000000000;
	num2a = num2 / 10000000000;
	num1b = num1 % 10000000000;
	num2b = num2 % 10000000000;

	for (total = 93; total < 99; total++)
	{
		a = num1a + num2a;
		b = num1b + num2b;
		if (num2b + num2b > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (total != 98)
			printf(", ");
		num1a = num2a;
		num1b = num2b;
		num2a = a;
		num2b = b;
	}
	printf("\n");
	return (0);
}

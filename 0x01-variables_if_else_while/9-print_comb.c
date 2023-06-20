#include <stdio.h>
/**
 * main - Entry point
 * description:prints all possible combinations of single-digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	for (digits = 48; digits <= 57; digits++)
	{
		putchar(digits);
		if (digits == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

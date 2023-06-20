#include <stdio.h>
/**
 * main - Entry point
 * description:prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int reverse = 122;

	while (reverse >= 97)
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * description:print alphabet lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 97;
	int capital = 65;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	while (capital <= 90)
	{
		putchar(capital);
		capital++;
	}
	putchar ('\n');
	return (0);
}

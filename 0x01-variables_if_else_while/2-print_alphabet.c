#include <stdio.h>
/**
 * main - Entry point
 * description:print alphabet lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}

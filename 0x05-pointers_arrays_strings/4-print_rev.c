#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: given string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int l = 0;
	int a;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (a = l; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

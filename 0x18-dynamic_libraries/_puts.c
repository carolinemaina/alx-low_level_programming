#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @s: given string
 * Return: Always 0
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

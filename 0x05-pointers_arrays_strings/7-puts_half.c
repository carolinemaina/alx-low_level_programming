#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: given string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a, half, length;

	length = 0;

	for  (a = 0; str[a] != '\0'; a++)
	length++;

	half = (length / 2);

	if ((length % 2) == 1)
		half = ((length + 1) / 2);

	for (a = half; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}

#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: string given
 * Return: Always 0(Success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

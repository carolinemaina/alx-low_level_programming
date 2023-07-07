#include "main.h"

/**
 * _strlen -  calculate length of string
 * @s: given input
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

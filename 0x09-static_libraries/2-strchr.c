#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if not found
 * @s: string input
 * @c: character to search
 * Return: 1st occurrence of 'c' or NULL
 */
char *_strchr(char *s, char c)
{
	int search;

	for (search = 0; s[search] >= '\0'; search++)
	{
		if (s[search] == c)
			return (s + search);
	}

	return (NULL);
}

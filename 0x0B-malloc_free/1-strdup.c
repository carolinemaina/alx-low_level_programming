#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter
 * @str: given character
 * Return: NULL if str = NULL, returns pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int len, lo = 0;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (lo = 0; str[lo]; lo++)
		dup[lo] = str[lo];

	return (dup);
}

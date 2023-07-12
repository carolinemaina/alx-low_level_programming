#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input
 * Return: pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		s[b] = str[b];

	return (s);
}

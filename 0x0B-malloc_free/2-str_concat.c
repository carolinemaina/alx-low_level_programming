#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	s3 = malloc(sizeof(char) * (a + b + 1));

	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		s3[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		s3[a] = s2[b];
		a++, b++;
	}
	s3[a] = '\0';
	return (s3);
}

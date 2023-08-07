#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s3 == NULL)
		return (NULL);

	l1 = l2 = 0;
	while (s1[l1] != '\0')
	{
		s3[l1] = s1[l1];
		l1++;
	}
	while (s2[l2] != '\0')
	{
		s3[l1] = s2[l2];
		l1++, l2++;
	}
	s3[l1] = '\0';
	return (s3);
}

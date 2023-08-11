#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: given string
 * @s2: given string
 * @n: bytes in s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int l1 = 0, l2 = 0;
	unsigned int len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s3[len2])
		len2++;

	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (l1 < len1)
	{
		s3[l1] = s1[l1];
		l1++;
	}
	while (n < len2 && l1 < (len1 + n))
		s3[l1++] = s2[l2++];
	while (n >= len2 && l1(len1 + len2))
		s3[l1++] = s2[l2++];

	s3[l1] = '\0';

	return (s3);
}

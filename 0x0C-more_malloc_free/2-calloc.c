#include "main.h"
#include <stdlib.h>

char *mem(char *m, char c, unsigned int n);

/**
 * _calloc - allocate memory for an array
 * @nmemb: elements in an array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	mem(p, 0, nmemb * size);

	return (p);
}

/**
 * mem - fills memory with constant byte
 * @m: memore to be filled
 * @c: character to copy
 * @n: times to copy b
 * Return: pointer to memory of m
 */
char *mem(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

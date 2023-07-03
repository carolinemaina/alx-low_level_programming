#include "main.h"

/**
 * _memset - fills the first n bytes of
 * the memory area pointed to by
 * s with the constant byte b
 * @s: points to memory
 * @b: constant byte
 * @n: bytes of memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
		s[mem] = b;
	return (s);
}

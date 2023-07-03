#include "main.h"

/**
 * _strspn - Returns the number of bytes
 * in the initial segment of s
 * @s: segment
 * @accept: bytes from
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int var;

	while (*s)
	{
		for (var = 0; accept[var]; var++)
		{
			if (*s == accept[var])
			{
				num++;
				break;
			}
			else if (accept[var + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}

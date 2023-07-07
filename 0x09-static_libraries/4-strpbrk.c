#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string
 * @accept: string
 * Return:  pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int position;

	while (*s)
	{
		for (position = 0; accept[position]; position++)
		{
			if (*s == accept[position])
				return (s);
		}
		s++;
	}
	return ('\0');
}

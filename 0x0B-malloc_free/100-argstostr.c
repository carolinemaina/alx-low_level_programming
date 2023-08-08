#include "main.h"
#include "stdlib.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input strings
 * @av: array of pointer to strings
 * Return: pointer to a new string, or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int l1, l2;
	int p = 0;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (l1 = 0; l1 < ac; l1++)
	{
		for (l2 = 0; av[l1][l2]; l2++)
			len++;
	}
	len += ac;

	s = malloc(sizeof(char) * len + 1);
	if (s ==  NULL)
		return (NULL);

	for (l1 = 0; l1 < ac; l1++)
	{
		for (l2 = 0; av[l1][l2]; l2++)
		{
			s[p] = av[l1][l2];
			p++;
		}
		if (s[p] == '\0')
		{
			s[p++] = '\n';
		}
	}
	return (s);
}

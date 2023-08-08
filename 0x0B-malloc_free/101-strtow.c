#include "main.h"
#include <stdlib.h>

int wordcount(char *s);

/**
 * **strtow - splits a string into words
 * @str: given string
 * Return: pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 * or if function fails
 */

char **strtow(char *str)
{
	char **words, *temp;
	int lo, wo, start, end;
	int ind = 0, len = 0, ch = 0;

	while (*(str + len))
		len++;
	wo = wordcount(str);
	if (wo == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (wo + 1));
	if (words == NULL)
		return (NULL);

	for (lo = 0; lo <= len; lo++)
	{
		if (str[lo] == ' ' || str[lo] == '\0')
		{
			if (ch)
			{
				end = lo;
				temp = (char *) malloc(sizeof(char) * (ch + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				words[ind] = temp - ch;
				ind++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			start = lo;
	}

	words[ind] = NULL;
	return (words);
}

/**
 * wordcount - function to count number of words
 * @s: given string
 * Return: number of words
 */

int wordcount(char *s)
{
	int p = 0;
	int w = 0;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			p = 0;
		else if (p == 0)
		{
			p = 1;
			w++;
		}
	}
	return (w);
}

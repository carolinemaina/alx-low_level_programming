#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int digit(char *s);
int strleng(char *s);
void errors(void);

/**
 * main - program that multiplies two positive numbers
 * @argc: total arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len3, i, cont, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
		errors();
	len1 = strleng(s1);
	len2 = strleng(s2);
	len3 = len1 + len2 + 1;
	result = malloc(sizeof(int) * len3);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		cont = 0;
		for (len2 = strleng(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			cont += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = cont % 10;
			cont /= 10;
		}
		if (cont > 0)
			result[len1 + len2 + 1] += cont;
	}
	for (i = 0; i < len3 - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * digit - checks if string contain non-digit character
 * @s: given string
 * Return: 0 if non-digit is found
 */
int digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * strleng - check length of string
 * @s: given string
 * Return: string length
 */
int strleng(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

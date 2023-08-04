#include "main.h"
#include <stdio.h>

/**
 * atoi - string to integer
 * @s: string
 * Return: converted string
 */
int atoi(char *s)
{
	int length = 0;
	int num = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two number
 * @argc: total arguments
 * @argv: array of arguments
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	int muti, numa, numb;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numa = atoi(argv[1]);
	numb = atoi(argv[2]);
	mult = numa * numb;

	printf("%d\n", mult);

	return (0);
}

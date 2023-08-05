#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check for digit in string
 * @s: array
 * Return: Always 0 (Success)
 */

int check_num(char *s)
{
	unsigned int count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - sum of numbers
 * @argc: Total arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int s;
	int sum = 0;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			s = atoi(argv[count]);
			sum += s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

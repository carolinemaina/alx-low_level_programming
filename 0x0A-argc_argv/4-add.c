#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - argc & argv function
 * @argc: total argument
 * @argv: the arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int a;
	char *b;
	unsigned int l;
	unsigned int sum;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			b = argv[a];

			for (l = 0; l < strlen(b); l++)
			{
				if (b[l] < 48 || b[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(b);
			b++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

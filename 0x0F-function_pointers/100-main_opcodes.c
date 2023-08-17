#include <stdlib.h>
#include <stdio.h>

/**
 * main -a program that prints the opcodes of its own main function
 * @argc: total arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int byte;
	char *a;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx", a[i]);
	}
	return (0);
}

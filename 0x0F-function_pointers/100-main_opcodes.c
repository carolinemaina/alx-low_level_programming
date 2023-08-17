#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: total arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int byte;
	int i;
	unsigned char opc;

	int (*adrs)(int, char **) = main;

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

	for (i = 0; i < byte; i++)
	{
		opc = *(unsigned char *)adrs;
		printf("%.2x", opc);

		if (i == byte - 1)
			continue;
		
		printf(" ");
		adrs++;
	}
	printf("\n");

	return (0);
}

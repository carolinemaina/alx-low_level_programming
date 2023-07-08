#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc & argv function
 * @argc: total argument
 * @argv: the arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}


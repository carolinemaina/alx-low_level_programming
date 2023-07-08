#include "main.h"
#include <stdio.h>

/**
 * main - argc & argv function
 * @argc: total argument
 * @argv: the arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

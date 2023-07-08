#include "main.h"
#include <stdio.h>

/**
 * main - argc and argv function
 * @argc: total argument
 * @argv: the arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}

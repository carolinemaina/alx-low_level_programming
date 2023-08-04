#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: total arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
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

#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: total arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

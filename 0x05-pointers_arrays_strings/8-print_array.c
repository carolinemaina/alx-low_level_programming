#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array name
 * @n: total in array to be printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < (n - 1); length++)
	{
		printf("%d,", a[length]);
	}
	if (length == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

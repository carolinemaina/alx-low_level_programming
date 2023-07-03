#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two
 * diagonals of a square matrix of integes
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int asum = 0;
	int bsum = 0;
	int l;

	for (l = 0; l < size; l++)
	{
		asum = asum + a[l * size + l];
	}

	for (l = size - 1; l >= 0; l--)
	{
		bsum += a[l * size + (size - l - 1)];
	}

	printf("%d, %d\n", asum, bsum);
}

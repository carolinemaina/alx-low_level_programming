#include "main.h"

/**
 * reverse_array - function that reverses content of an array of integers
 * @a: array
 * @n: number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int nom;
	int rev;

	for (nom = 0; nom < n--; nom++)
	{
		rev = a[nom];
		a[nom] = a[n];
		a[n] = rev;
	}
}

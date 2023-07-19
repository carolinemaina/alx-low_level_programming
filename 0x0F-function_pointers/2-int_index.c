#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which
 * the cmp function does not return 0
 * @array: an array
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

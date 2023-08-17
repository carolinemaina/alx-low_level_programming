#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: an array
 * @size: size of array
 * @action: pointer to function you need to use
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}

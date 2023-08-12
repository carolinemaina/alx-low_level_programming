#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: size of allocated memory fot ptr
 * @new_size: new size
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p_old, *p_new;
	unsigned int l;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p_new = malloc(new_size);
	if (!p_new)
		return (NULL);
	
	p_old = ptr;

	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
			p_new[l] = p_old[l];
	}
	if (new_size > old_size)
	{
		for (l = 0; l < old_size; l++)
			p_new[l] = p_old[l];
	}

	free(ptr);
	return (p_new);
}

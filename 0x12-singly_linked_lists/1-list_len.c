#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a
 * linked list_t list
 * @h: pointer to list
 * Return: total number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}
	return (ele);
}

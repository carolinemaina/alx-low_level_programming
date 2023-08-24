#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list to print
 * Return: nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		e++;
	}
	return (e);
}

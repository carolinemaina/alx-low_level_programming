#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: linked list to print
 * Return: nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free-list - function that frees a list_t list
 * @head: list to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *buff;

	while (head)
	{
		buff = head->next;
		free(head->str);
		free(head);
		head = buff;
	}
}

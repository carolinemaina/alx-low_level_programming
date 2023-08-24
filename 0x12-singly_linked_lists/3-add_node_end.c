#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list
 * @head: double pointer to list_t
 * @str: string for new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *buff = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (buff->next)
		buff = buff->next;
	buff->next = n;

	return (n);
}

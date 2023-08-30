#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: start of node
 * @idx:  index of the list where the new node should be added
 * @n: data for new node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *buff = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 0;

	while (buff && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = buff->next;
			buff->next = new;
			return (new);
		}
		else
		{
			buff = buff->next;
			i++;
		}
	}
	return (NULL);
}

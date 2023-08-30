#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head: first element in node
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *buff = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(buff);
		return (1);
	}

	while (i < index - 1)
	{
		if (!buff || !(buff->next))
			return (-1);
		buff = buff->next;
		i++;
	}

	current = buff->next;
	buff->next = current->next;
	free(current);
	return (1);
}

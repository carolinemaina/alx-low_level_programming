#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: first element in node
 * @index:  index of the node, starting at 0
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *buff = head;

	while (buff && i < index)
	{
		buff = buff->next;
		i++;
	}

	if (buff != NULL)
		return (buff);
	else
		return (NULL);
}

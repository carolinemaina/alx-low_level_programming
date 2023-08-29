#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * function sets the head to NULL
 * @head: list to be freed
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;

	while (*head)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	*head = NULL;
}

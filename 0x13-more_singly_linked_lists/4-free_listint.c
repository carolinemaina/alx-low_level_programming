#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: list to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}

#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @head: pointer to first node in linked list
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t l = 0;
	int a;
	listint_t *b;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (a > 0)
		{
			b = (*head)->next;
			free(*head);
			*head = b;
			l++;
		}
		else
		{
			free(*head);
			*head = NULL;
			l++;
			break;
		}
	}

	*head = NULL;

	return (l);
}

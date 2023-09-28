#include "lists.h"

/**
 * looped_listint_len - Counts number of unique nodes in looped linked list
 * @head: pointer to head of listint_t to check
 * Return: If the list is not looped - 0
 * otherwise number of unique nodes in list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t no = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				no++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				no++;
				tortoise = tortoise->next;
			}

			return (no);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of the listint_t list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no, i = 0;

	no = looped_listint_len(head);

	if (no == 0)
	{
		for (; head != NULL; no++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (no);
}

#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: first element in node
 * Return: 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *buff = head;

	while (buff)
	{
		sum += buff->n;
		buff = buff->next;
	}
	return (sum);
}

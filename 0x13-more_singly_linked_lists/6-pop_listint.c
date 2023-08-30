#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: first element in list
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *buff;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	buff = (*head)->next;
	free(*head);
	*head = buff;

	return (data);
}

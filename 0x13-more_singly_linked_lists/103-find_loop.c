#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a linked list
 * @h: linked list to search for
 * Return: address of node where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *sl = h;
	listint_t *fa = h;

	if (!h)
		return (NULL);

	while (sl && fa && fa->next)
	{
		fa = fa->next->next;
		sl = sl->next;
		if (fa == sl)
		{
			sl = h;
			while (sl != fa)
			{
				sl = sl->next;
				fa = fa->next;
			}
			return (fa);
		}
	}

	return (NULL);
}

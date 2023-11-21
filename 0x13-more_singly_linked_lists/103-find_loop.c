#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: ptr
 *
 * Return: address or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *now, *then;

	now = head;
	then = head;

	if (!head)
		return (NULL);
	while (now && then && then->next)
	{
		then = then->next->next;
		now = now->next;
		if (then == now)
		{
			now = head;
			while (now != then)
			{
				now = now->next;
				then = then->next;
			}
			return (then);
		}
	}
	return (NULL);
}

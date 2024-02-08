#include "lists.h"

/**
 * get_dnodeint_at_index - explained
 * @head: h
 * @index: idx
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int x = 0;

	if (!ptr || index < 0)
		return (NULL);
	while (ptr)
	{
		if (x == index)
			return (ptr);
		ptr = ptr->next;
		x++;
	}
	return (NULL);
}

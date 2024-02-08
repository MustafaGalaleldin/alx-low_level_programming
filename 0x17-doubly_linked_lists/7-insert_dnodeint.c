#include "lists.h"

/**
 * insert_dnodeint_at_index - as name
 * @h: head
 * @idx: index
 * @n: data
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *node = malloc(sizeof(dlistint_t)), *ptr1;
	unsigned int x = 0;

	if (idx < 0 || !h || !*h || !node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	while (ptr)
	{
		if (x == idx)
		{
			if (!ptr->next)
			{
				node->prev = ptr;
				ptr->next = node;
				return (node);
			}
			ptr1 = ptr->next;
			ptr->next = node;
			ptr1->prev = node;
			node->next = ptr1;
			node->prev = ptr;
			return (node);
		}
		ptr = ptr->next;
		x++;
	}
	return (NULL);
}




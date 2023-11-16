#include "lists.h"

/**
 * list_len - claculate all the elements of a list_t list.
 *
 * @h: list pointer
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}


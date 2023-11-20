#include "lists.h"

/**
 * listint_len - claculate all the elements of a listint_t list.
 *
 * @h: list pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

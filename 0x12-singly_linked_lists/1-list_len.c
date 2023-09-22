#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		h = h->next;
		t++;
	}
	return (t);
}

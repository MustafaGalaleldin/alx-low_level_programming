#include "lists.h"

/**
 * dlistint_len - calc len
 * @h: head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *p = h;

	while (p)
	{
		len++;
		p = p->next;
	}
	return (len);
}

#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 *
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ret = 0;
	const dlistint_t *p = h;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		ret++;
	}
	return (ret);
}

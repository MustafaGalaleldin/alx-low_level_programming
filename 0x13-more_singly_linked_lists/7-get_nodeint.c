#include "lists.h"

/**
 * listintlen - claculate all the elements of a listint_t list.
 *
 * @h: list pointer
 *
 * Return: the number of elements
 */
unsigned int listintlen(const listint_t *h)
{
	const listint_t *ptr = h;
	unsigned int count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: ptr
 * @index: of node to be returned
 *
 * Return: node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m, i = 0;
	listint_t *ptr = head;

	if (!ptr)
		return (NULL);

	m = listintlen(head);
	m--;
	for (; i <= m; i++)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}

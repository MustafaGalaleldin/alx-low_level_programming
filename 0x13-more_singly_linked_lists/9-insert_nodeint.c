#include "lists.h"

/**
 * listint_len - claculate all the elements of a listint_t list.
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
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: ptr
 * @idx: index of node
 * @n: data member of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *p;
	unsigned int m, i;

	p = *head;
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	m = listintlen(p);
	m--;

	for (i = 0; i <= m; i++)
	{
		if (i == idx)
		{
			ptr->n = n;
			ptr->next = p;
			p = ptr;
			return (ptr);
		}
		p = p->next;
	}
	return (NULL);
}

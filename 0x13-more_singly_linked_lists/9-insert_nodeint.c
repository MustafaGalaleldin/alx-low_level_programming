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
	unsigned int m, i = 0;

	if (!(head && *head))
		return (NULL);
	p = *head;
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	m = listintlen(p);
	m--;
	if (!(idx <= m) && idx != m + 1)
	{
		free(ptr);
		return (NULL);
	}

	if (!idx)
	{
		ptr->n = n;
		ptr->next = p;
		*head = ptr;
		return (ptr);
	}
	while (i != idx - 1)
	{
		p = p->next;
		i++;
	}
	ptr->n = n;
	ptr->next = p->next;
	p->next = ptr;
	return (ptr);
}

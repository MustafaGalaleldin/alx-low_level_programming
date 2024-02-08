#include "lists.h"

/**
 * add_dnodeint_end - at end
 * @head: h
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	ptr = *head;
	if (!ptr)
	{
		*head = node;
		return (node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
	node->prev = ptr;
	return (node);
}

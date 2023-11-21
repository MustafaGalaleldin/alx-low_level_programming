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
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 *
 * @head: ptr
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre_ptr, *at_ptr;
	unsigned int d, i;

	if (!(*head))
		return (-1);

	d = listintlen(*head);
	if (!(index <= d))
		return (-1);

	pre_ptr = *head;
	at_ptr = *head;
	i = 0;
	if (!index)
	{
		*head = at_ptr->next;
		free(at_ptr);
		return (1);
	}
	while (i != index)
	{
		at_ptr = at_ptr->next;
		i++;
	}
	i = 0;
	while (i != index - 1)
	{
		pre_ptr = pre_ptr->next;
		i++;
	}
	pre_ptr->next = at_ptr->next;
	free(at_ptr);
	return (1);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: ptr to head
 *
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	ptr = *head;
	if (!ptr)
		return (0);
	i = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (i);
}


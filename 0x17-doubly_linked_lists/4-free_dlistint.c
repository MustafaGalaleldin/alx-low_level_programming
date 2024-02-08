#include "lists.h"

/**
 * free_dlistint - free list
 * @head: h
 * Return: non
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: h
 * @index: idx
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *ptr = *head, *ptr1, *ptr2;

	if (!head || !*head)
		return (-1);
	while (ptr)
	{
		if (x == index)
		{
			if (!ptr->next && !ptr->prev)
			{
				free(ptr);
				*head = NULL;
				return (1); }
			if (!ptr->prev)
			{
				ptr = ptr->next;
				*head = ptr;
				free(ptr->prev);
				ptr->prev = NULL;
				return (1); }
			if (!ptr->next)
			{
				ptr1 = ptr->prev;
				ptr1->next = NULL;
				free(ptr);
				return (1); }
			ptr1 = ptr->prev;
			ptr2 = ptr->next;
			ptr1->next = ptr2;
			ptr2->prev = ptr1;
			free(ptr);
			return (1);
		}
		x++;
		ptr = ptr->next;
	}
	return (-1);
}

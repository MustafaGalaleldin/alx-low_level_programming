#include "lists.h"

/**
 * free_listint2 - frees a listinnt_t list
 *
 * @head: ptr to ptr
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head && *head)
	{
		while (*head)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
}

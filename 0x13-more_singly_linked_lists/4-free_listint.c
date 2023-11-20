#include "lists.h"

/**
 * free_listint - frees a listinnt_t list
 *
 * @head: ptr
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		while (head)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}

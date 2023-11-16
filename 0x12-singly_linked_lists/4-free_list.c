#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: ptr
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}

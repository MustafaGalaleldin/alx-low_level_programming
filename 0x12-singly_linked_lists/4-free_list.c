#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *t, *next_t;

	if (!head)
		return;

	t = head;
	while (t)
	{
		next_t = t->next;
		free(t->str);
		free(t);
		t = next_t;
	}
}

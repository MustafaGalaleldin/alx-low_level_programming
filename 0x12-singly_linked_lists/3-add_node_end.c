#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head ptr
 * @str: data member
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *h = *head;

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}

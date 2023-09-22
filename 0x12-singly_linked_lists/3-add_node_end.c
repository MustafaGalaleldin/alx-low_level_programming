#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head pointer
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_head = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !n_head)
		return (NULL);
	if (str)
	{
		n_head->str = strdup(str);
		if (!n_head->str)
		{
			free(n_head);
			return (NULL);
		}
		n_head->len = _strlen(n_head->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n_head;
	}
	else
		*head = n_head;
	return (n_head);
}

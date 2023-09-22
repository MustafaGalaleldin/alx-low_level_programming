#include "lists.h"

/**
 * add_node - dds a new node at the beginning of a list_t list
 * @head: pointer
 * @str: str
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head = malloc(sizeof(list_t));

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
	n_head->next = *head;
	*head = n_head;
	return (head);
}

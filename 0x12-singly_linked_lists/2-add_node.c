#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head ptr
 * @str: data of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}

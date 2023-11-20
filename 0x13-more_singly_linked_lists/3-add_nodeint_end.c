#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: head ptr
 * @n: data member
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if (t)
	{
		while (t->next)
			t = t->next;
		t->next = ptr;
	}
	else
		*head = ptr;
	return (ptr);
}



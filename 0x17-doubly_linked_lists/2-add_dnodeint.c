#include "lists.h"

/**
 * add_dnodeint - add at beg
 * @head: h
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nod = malloc(sizeof(dlistint_t));

	if (!nod)
		return (NULL);

	nod->n = n;
	nod->next = NULL;
	nod->prev = NULL;
	if (*head)
	{
		nod->next = *head;
		(*head)->prev = nod;
		*head = nod;
	}
	return (nod);
}

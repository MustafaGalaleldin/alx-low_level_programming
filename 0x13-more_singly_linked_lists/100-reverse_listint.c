#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: ptr to ptr head
 *
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_ptr, *at_ptr;

	if (!(head && *head))
		return (NULL);
	if (!((*head)->next))
		return (*head);

	pre_ptr = *head;
	at_ptr = pre_ptr->next;
	*head = at_ptr;
	pre_ptr->next = NULL;
	at_ptr = at_ptr->next;
	(*head)->next = pre_ptr;
	pre_ptr = *head;

	while (at_ptr)
	{
		*head = at_ptr;
		at_ptr = at_ptr->next;
		(*head)->next = pre_ptr;
		pre_ptr = *head;
	}
	return (*head);
}

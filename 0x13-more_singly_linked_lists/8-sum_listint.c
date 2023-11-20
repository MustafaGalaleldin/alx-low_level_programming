#include "lists.h"

/**
 * sum_listint - returns the sum of the data (n) of a listint_t linked list
 *
 * @head: ptr
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!ptr)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

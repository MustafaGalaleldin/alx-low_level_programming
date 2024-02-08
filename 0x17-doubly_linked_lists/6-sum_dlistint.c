#include "lists.h"

/**
 * sum_dlistint - get sum
 * @head: h
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

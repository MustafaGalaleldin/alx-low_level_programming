#include "lists.h"
/**
 * ncalc - calculate real nodes
 *
 * @head: ptr
 *
 * Return: nodes
 */
size_t ncalc(const listint_t *head)
{
	const listint_t *atptr, *postptr;
	size_t count = 1;

	if (!head || !head->next)
		return (0);
	atptr = head->next;
	postptr = atptr->next;
	while (postptr)
	{
		if (atptr == postptr)
		{
			atptr = head;
			while (atptr != postptr)
			{
				count++;
				atptr = atptr->next;
				postptr = postptr->next;
			}
			atptr = atptr->next;
			while (atptr != postptr)
			{
				count++;
				atptr = atptr->next;
			}
			return (count);
		}
		atptr = atptr->next;
		postptr = (postptr->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: ptr
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t n, i = 0;

	if (!head)
		return (0);
	ptr = head;
	n = ncalc(head);
	if (n == 0)
	{
		while (ptr)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			n++;
			ptr = ptr->next;
		}
		return (n);
	}
	else
	{
		for (; i < n; i++)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			ptr = ptr->next;
		}
		printf("->[%p] %d\n", (void *)ptr, ptr->n);
		return (n);
	}
}

#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: list pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	if (h)
	{
		while (ptr)
		{
			if (ptr->str)
				printf("[%u] %s\n", ptr->len, ptr->str);
			else
				printf("[0] (nil)\n");
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}

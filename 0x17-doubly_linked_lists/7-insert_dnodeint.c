#include "lists.h"
/**
 * add_dnodeint - add at beg
 * @head: h
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 *
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
        }
        *head = nod;
        return (nod);
}*/
/**
 * insert_dnodeint_at_index - as name
 * @h: head
 * @idx: index
 * @n: data
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *node, *ptr1;
	unsigned int x = 0;

	if (!h || !*h)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	while (ptr)
	{
		if (!idx)
		{
			ptr->prev = node;
			node->next = ptr;
			*h = node;
			return (node);
		}
		if (x == idx - 1)
		{
			if (!ptr->next)
			{
				node->prev = ptr;
				ptr->next = node;
				return (node);
			}
			ptr1 = ptr->next;
			ptr->next = node;
			ptr1->prev = node;
			node->next = ptr1;
			node->prev = ptr;
			return (node);
		}
		ptr = ptr->next;
		x++;
	}
	return (NULL);
}

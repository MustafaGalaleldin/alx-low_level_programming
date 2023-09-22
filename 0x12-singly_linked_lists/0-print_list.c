#include "lists.h"

/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: str
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}

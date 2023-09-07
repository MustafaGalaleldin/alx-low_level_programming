#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: in string
 * @b: char to fill with
 * @n: num of bytes
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: size
 *
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}

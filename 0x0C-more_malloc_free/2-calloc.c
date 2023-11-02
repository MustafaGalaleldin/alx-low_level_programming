#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of members
 * @size: size of member
 *
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (; t < nmemb; t++)
		p[t] = 0;
	return ((void *)p);
}

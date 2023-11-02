#include "main.h"
#include <stdlib.h>
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
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of members
 * @size: size of member
 *
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int t = 0;*/
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	_memset(p, 0, size * nmemb);
	return ((void *)p);
}

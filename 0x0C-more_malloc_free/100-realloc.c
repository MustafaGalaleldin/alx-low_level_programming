#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: null or pointer
 */

void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int x;
	char *ndest = (char *)dest;
	char *nsrc = (char *)src;

	for (x = 0; x < n; x++)
		ndest[x] = nsrc[x];
	return ((void *)ndest);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: ointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	p = malloc(new_size);
	if (!p)
		return (NULL);
	_memcpy(p, ptr, new_size);
	free(ptr);
	return (p);
}

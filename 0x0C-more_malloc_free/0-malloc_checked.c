#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using mallo
 *
 * @b: number of bytes
 *
 * Return: pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}

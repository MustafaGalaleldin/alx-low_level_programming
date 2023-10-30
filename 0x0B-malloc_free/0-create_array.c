#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializ.
 *
 * @size: size
 * @c: char
 *
 * Return: a pointer or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

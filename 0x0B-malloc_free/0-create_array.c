#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and initializ
 * @size: int size
 * @c: char
 * Return:pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

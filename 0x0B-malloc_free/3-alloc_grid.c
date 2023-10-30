#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int *ptr = malloc(sizeof(width) * width);
	int **pptr = &ptr;

	pptr =  malloc(sizeof(ptr) * height);
	if (width <= 0 || height <= 0)
		return (NULL);
	if (ptr && pptr)
		return (pptr);
	return (NULL);
}

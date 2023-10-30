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
	int **ptr;
	int x, y;

	ptr =  malloc(sizeof(*ptr) * height);
	if (width <= 0 || height <= 0 || !ptr)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(**ptr) * width);
		if (!ptr[x])
		{
			while (x)
			{
				free(ptr[x]);
				x--;
			}
			free(ptr);
			return (NULL);
		}
	for (y = 0; y < width; y++)
		ptr[x][y] = 0;
	}
	return (ptr);
}

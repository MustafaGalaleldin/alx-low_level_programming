#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: min
 * @max: max
 * Return: pointer or NULL	
 */

int *array_range(int min, int max)
{
	int *ar;
	int t = 0;
	int i;
	int min0 = min;

	if (min > max)
		return (NULL);
	while (min0 <= max)
	{
		min0++;
		t++;
	}
	ar = malloc(sizeof(int) * t);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < t; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}

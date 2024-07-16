#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 in fail
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				index = (int)i;
				break;
			}
		}
	}
	return (index);
}

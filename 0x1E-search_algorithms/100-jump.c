#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using binary search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 in fail
*/
int jump_search(int *array, size_t size, int value)
{
	int index = -1;
	size_t step = sqrt(size);
	size_t i, j;

	if (array)
	{
		for (i = 0; i < size; i += step)
		{
			if (value > array[i] && i != size - 1)
			{
				printf("Value checked array[%ld] = [%d]\n"
					, i, array[i]); }
			else
			{
				if (i == size - 1)
				{
					printf("Value checked array[%ld] = [%d]\n"
							, i, array[i]);
					printf("Value found between indexes [%ld] and [%ld]\n"
							, i, i + step);
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					break; }
				printf("Value found between indexes [%ld] and [%ld]\n"
						, i - step, i);
				for (j = i - step; j <= i; j++)
				{
					printf("Value checked array[%ld] = [%d]\n"
							, j, array[j]);
					if (value == array[j])
					{
						index = (int)j;
						break; }
				}
				break;
			}
		}
	}
	return (index);
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 in fail
*/
int binary_search(int *array, size_t size, int value)
{
	int index = -1;
	int start = 0;
	int end = (int)size - 1;
	int mid;
	int i;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != start)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
	}
	return (index);
}

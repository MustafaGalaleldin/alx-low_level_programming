#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - do function that's parameter to each element
 *
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

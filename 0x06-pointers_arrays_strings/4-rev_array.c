#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array
 * @n: integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	n = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x];
		a[n - x] = y;
	}
}

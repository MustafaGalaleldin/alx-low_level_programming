#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to number
 * @index: idx
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1 << index, t = *n;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	if (x & t)
		return (1);
	else
	{
		t += x;
		*n = t;
		return (1);
	}
}


	




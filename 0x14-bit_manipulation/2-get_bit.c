#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1 << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	if (n & x)
		return (1);
	else
		return (0);
}

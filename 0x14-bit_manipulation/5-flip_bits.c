#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bytes
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = 1;

	x = x << (sizeof(unsigned long int) * 8 - 1);
	while (x)
	{
		if ((x & n) == (x & m))
		{
			x >>= 1;
			continue;
		}
		count++;
		x >>= 1;
	}
	return (count);
}

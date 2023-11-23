#include "main.h"

/**
 * _pow - power function
 *
 * @a: base
 * @b: power
 *
 * Return: num
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int n, res = 1;

	if (!b)
		return (1);
	if (b == 1)
		return (a);

	for (n = 0; n < b; n++)
		res *= a;
	return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of binary
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, x = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i--;
	while (i >= 0)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		dec += ((b[i] - 48) ? _pow(2, x) : 0);
		x++;
		i--;
	}
	return (dec);
}

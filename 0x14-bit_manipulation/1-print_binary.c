#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	x = x << (sizeof(unsigned long int) * 8 - 1);
	if (!n)
	{
		_putchar('0');
		return;
	}
	while (x)
	{
		if (x & n)
			break;
		x >>= 1;
	}
	while (x)
	{
		if (x & n)
			_putchar('1');
		else
			_putchar('0');
		x >>= 1;
	}
}

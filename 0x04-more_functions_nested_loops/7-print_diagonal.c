#include "main.h"
/**
 * print_diagonal - pr d
 * @n: input
 */
void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
	int l;

	for (l = 1; l < n; l++)
	{
		_putchar(92);
		_putchar('\n');
	for (count = 1; count <= l; count++)
	{
	_putchar(' ');
	}
	}
	}
	else
	{
		_putchar('\n');
	}
}

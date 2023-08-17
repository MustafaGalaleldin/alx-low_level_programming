#include "main.h"
/**
 * print_diagonal - pr d
 * @n: input
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
	int l;
	int count;

	for (l = 1; l <= n; l++)
	{
		for (count = 1; count < l; count++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	
	}
	else
	{
		_putchar('\n');
	}
}

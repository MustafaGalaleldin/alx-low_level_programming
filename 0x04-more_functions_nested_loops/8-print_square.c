#include "main.h"
/**
 * print_square - pr1
 * @size: input
 */
void print_square(int size)
{
	if (size > 0)
	{
	int line = 1;

	while (line <= size)
	{
		int count = 1;

		while (count <= line)
		{
			_putchar('#');
			count++;
		}
		_putchar('\n');
		line++;
	}
	}
	else
	{
		_putchar('\n');
	}
}


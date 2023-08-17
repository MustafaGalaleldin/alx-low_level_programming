#include "main.h"
/**
 * print_triangle - tr
 * @size: integer input
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int line = 1;

		while (line <= size)
		{
			int count1 = 1;
			int count2 = 1;

			while (count1 <= (size - line))
			{
				_putchar(' ');
				count1++;
			}
			while (count2 <= line)
			{
			_putchar('#');
			count2++;
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


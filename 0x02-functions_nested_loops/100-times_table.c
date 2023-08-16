#include "main.h"
/**
 * print_times_table - print times table
 * @n: input
 */
void print_times_table(int n)
{
	if (n >= 0 || n <= 15)
	{
	int line = 1;

	while (line <= n)
	{
		int count = 1;
		int num = line;

		_putchar('0');
		_putchar(',');
		_putchar(' ');
		while (count <= n)
		{
			if (num <= n)
			{
			_putchar(' ');
			_putchar(num + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			if (count != n)
			{
			_putchar(',');
			_putchar(' ');
			}
			count++;
			num = count * line;
		}
		_putchar('\n');
		line++;
	}
	}
}

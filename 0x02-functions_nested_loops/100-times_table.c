#include "main.h"
/**
 * print_times_table - print times table
 * @n: input
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{int line = 0;

	while (line <= n)
	{int count = 1;
	int num = line;

		if (n == 0)
		{_putchar('0');
	       _putchar('\n');	}
		else
		{_putchar('0');
		_putchar(',');
		_putchar(' ');
		while (count <= n)
		{
			if (num <= 9)
			{_putchar(' ');
			_putchar(' ');
			_putchar(num + '0'); }
			else if (num < 100)
			{_putchar(' ');
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0'); }
			else if (num < 1000)
			{_putchar((num / 100) + '0');
			_putchar(((num % 100) / 10) + '0');
			_putchar(((num % 100) % 10) + '0');
			}
			if (count != n)
			{_putchar(',');
			_putchar(' '); }
			count++;
			num = count * line;
		}
		}
		_putchar('\n');
		line++;
	}
	}
}

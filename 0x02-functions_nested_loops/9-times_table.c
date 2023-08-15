#include "main.h"
/**
 * times_table - print nine times table
 */
void times_table(void)
{
	int line = 0;

	while (line <= 9)
	{
		int count = 0;
		int n = 0;

		while (count <= 9)
		{
			_putchar(n + '0');
			if (count != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			count++;
			n += line;
		}
		_putchar('\n');
		line++;
	}
}
#include "main.h"
/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			int j = i;

		if (i > 9)
		{
			_putchar(1 + '0');
			j = i % 10;
		}
		_putchar(j + '0');
		i++;
		}
		_putchar('\n');
		count++;
		}
}

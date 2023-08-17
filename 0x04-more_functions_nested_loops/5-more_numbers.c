#include "main.h"
/**
 * more_numbers - more
 */

void more_numbers(void)
{
	int i = 0;
	int count = 0;

	while (count < 10)
	{
	while (i <= 14)
	{
		if (i <= 9)
		{
			_putchar(i + '0');
		}
		_putchar((i / 10) + '0');
		_putchar((n % 10) + '0');
		i++;
	}
	_putchar('\n');
	count++;
	}
}

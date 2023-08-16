#include "main.h"
/**
 * print_last_digit - print last digit
 *@i:input
 *Return: i value
 */
int print_last_digit(int i)
{
	int res;

	if (i < 0)
	{
		i *= -1;
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar((i % 10) + '0');
	}
	return (0);
}

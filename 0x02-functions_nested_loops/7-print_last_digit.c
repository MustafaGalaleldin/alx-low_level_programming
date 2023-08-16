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
		res = _putchar((i % 10) + '0');
		return (res);
	}
	else
	{
		res = _putchar((i % 10) + '0');
		return (res);
	}
	
}

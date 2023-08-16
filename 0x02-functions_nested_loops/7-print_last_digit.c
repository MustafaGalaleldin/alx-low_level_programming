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
		res = -1 * (i % 10);			
	}
	else
	{
		res = i % 10;
	}
		
	_putchar(res + '0');
	return (res);
	
}

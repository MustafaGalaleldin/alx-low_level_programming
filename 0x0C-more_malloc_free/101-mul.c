#include "main.h"
#include <stdlib.h>
/**
 * _puts - pr
 * @str: input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * pure - to detect pure numbers strings
 *
 * @c: string
 *
 * Return: 1 if pure numbers 0 if mixed
 */

int pure(char *c)
{
	int i;

	for (i = 0; *c != '\0'; i++, c++)
	{
		if (*c >= 48 && *c <= 57)
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * _atoi - convert a string to integer
 * @s: string
 * Return: integer or 0 if no integer
 */

int _atoi(char *s)
{
	int ch = 0;
	unsigned int result = 0;
	int cond;

	/* to calculate the initial negative signs */
	while (*s != 0 && !(*(s + 1) >= 48 && *(s + 1) <= 57))
	{
		if (*s == '-')
			ch++;
		if (*s >= 48 && *s <= 57)
			break;
		s++;
	}
		if (*s == '-')
			ch++;

		/* to set the sign */
		if (ch % 2 == 0)
			cond = 0;
		else
			cond = 1;

		while (*s != 0)
		{
			if (*s >= 48 && *s <= 57)
				result = /*(unsigned int)*/result * 10 + (*s - '0');
			s++;

			/* to stop at the first integer sequence*/
			if (!(*s >= 48 && *s <= 57))
				break;
		}
		if (cond)
			result = -/*(unsigned int)*/result;
		return ((int)result);
}
/**
 * print_number - prints an integer
 * @n: input
 * Return: number
 */

void print_number(unsigned long int n)
{
	if (n / 10 != 0)
	{
	print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * main - multiplies two positive numbers
 *
 * @ac: args counter
 * @av: args vector
 *
 * Return: 0 if sucess
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		_puts("Error");
		exit(98);
	}
	if (!(pure(av[1]) && pure(av[2])))
	{
		_puts("Error");
		exit(98);
	}
	print_number(_atoi(av[1]) * _atoi(av[2]));
	_putchar('\n');
	return (0);
}

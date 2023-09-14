#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: to separate
 * @n: num of args
 * Return: non
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int x;

	if (separator)
	{
	va_start(p, n);

	for (x = 0; x < n; x++)
	{
		if (!(x == n - 1))
			printf("%d%s", va_arg(p, int), separator);
		else
			printf("%d\n", va_arg(p, int));
	}
	}
	va_end(p);
}

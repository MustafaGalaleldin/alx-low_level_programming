#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	if (n > 0)
	{
	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ar, int));
		else if (separator)
			printf("%d%s", va_arg(ar, int), separator);
		else
			printf("%d", va_arg(ar, int));
	}
	va_end(ar);
	}
}

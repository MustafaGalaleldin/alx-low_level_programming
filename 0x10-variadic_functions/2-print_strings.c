#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *x;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ar, char *);

		if (i == n - 1)
			printf("%s\n", x ? x : "(nil)");
		else
			printf("%s%s", x ? x : "(nil)", separator ? separator : "");
	}
	va_end(ar);
}

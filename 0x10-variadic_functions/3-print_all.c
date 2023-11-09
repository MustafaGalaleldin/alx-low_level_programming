#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: to be printed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	int len, i = 0;
	char *x, *l = "";

	if (!format || format[0] == '\0')
	{
		printf("\n");
		return; }
	len = strlen(format);
	va_start(ar, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", l, va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", l, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", l, va_arg(ar, double));
				break;
			case 's':
				x = va_arg(ar, char *);
				printf("%s%s", l, x ? x : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		l = ", ";
		i++;
		continue;
	}
		printf("\n");
		va_end(ar);
}

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
	char *x;

	if (!format || format[0] == '\0')
	{
		printf("\n");
		return;
	}
	len = strlen(format);
	va_start(ar, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ar, int));
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
				break;
			case 's':
				x = va_arg(ar, char *);
				printf("%s", x ? x : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (i + 1 != len)
		{
			printf(", ");
			i++;
			continue;
		}
			printf("\n");
		i++;
	}
		va_end(ar);
}

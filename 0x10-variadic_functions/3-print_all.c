#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - l
 * @s: input
 * Return: length
 *
int _strlen(const char * const s)
{
	int count = 0;
	int i;

	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}*/

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

	if (!format)
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
				printf("%s", va_arg(ar, char *));
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

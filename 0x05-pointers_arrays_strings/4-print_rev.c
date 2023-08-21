#include "main.h"
/**
 * print_rev - rev
 * @s: input
 */
void print_rev(char *s)
{
	for (*s = '\0'; *s >= 0; --*s)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

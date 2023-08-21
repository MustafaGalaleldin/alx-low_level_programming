#include "main.h"
/**
 * print_rev - rev
 * @s: input
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
	{
		j++;
	}
	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

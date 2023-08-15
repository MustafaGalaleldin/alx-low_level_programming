#include "main.h"
/**
 * print_alphabet_x10 - alpha lcx10
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		int a = 'a';

		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}
	_putchar('\n');
	count++;
	}
}

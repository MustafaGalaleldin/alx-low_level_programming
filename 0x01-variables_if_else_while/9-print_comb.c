#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x >= '0' && x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
		putchar(',');
		putchar(32);
		}
		x++;
	}
	putchar('\n');
	return (0);
}


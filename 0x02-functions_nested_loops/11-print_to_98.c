#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural nums
 * @n: input
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
		putchar(',');
		putchar(' ');
		n++;
		}
		else
		{
			putchar('\n');
		}
	}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
				n--;
			}
			else
			{
				putchar('\n');
			}
		}
	}
}


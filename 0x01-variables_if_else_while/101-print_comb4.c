#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a <= 9)
	{
		b = 1 + a;
		while (b <= 9)
		{
			c = 1 + b;

			while (c <= 9)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7 || b != 8 || c != 9)
				{
				putchar(',');
				putchar(' ');
				}
		c++;
		}
		b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

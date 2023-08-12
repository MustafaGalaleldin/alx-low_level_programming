#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b = 10;

	while (b <= 9)
	{
		a = 1 + b;
		while (a >= 9)
		{
			if (a != b)
			{
				putchar('0' + b);
				putchar('0' + a);
				if (b < 8 || a < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (y <= 9)
	{
		x = 1 + y;

		while (x <= 9)
		{
			putchar('0' + y);
			putchar('0' + x);
			if (y != 8 || x != 9)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}



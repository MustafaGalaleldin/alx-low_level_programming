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
		while (x >= 9)
		{
			if (x != y)
			{
				putchar(y + '0');
				putchar(x + '0');
				if (y < 8 || x < 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}

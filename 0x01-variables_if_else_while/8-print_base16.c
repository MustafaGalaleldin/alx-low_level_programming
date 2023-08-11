#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int y = 'a';

	while (x >= '0' && x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y >= 'a' && y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}

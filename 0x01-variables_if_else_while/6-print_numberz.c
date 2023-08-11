#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}

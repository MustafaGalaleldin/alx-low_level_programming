#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x >= 'a' && x <= 'z' && x != 'e' && x != 'q')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

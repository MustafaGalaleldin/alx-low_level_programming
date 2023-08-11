#include <stdio.h>
/**
 * main - Entry point
 * putchar pro.
 * Return: 0
 */
int main(void)
{
	char n = 'a';

	while (n >= 'a' && n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * putchar pro.
 * Return: 0
 */
int main(void)
{
	char n = 97;

	while (n >= 97 && n <= 121)
	{
		putchar('%c', n);
		n++;
	}
	putchar('z');
	return (0);
}

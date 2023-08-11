#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char n = 'a';
	char m = 'A';

	while (n >= 97 && n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m >= 65 && m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	long int a = 612852475143;
	int b = 2;
	int d = a / b;

	while (d != 1)
	{
	int c = a % b;

	while (c == 0)
	{
		a = d;
		c = a % b;
	}
	b++;
	d = a / b;
	}
	printf("%ld\n", a);
	return (0);
}




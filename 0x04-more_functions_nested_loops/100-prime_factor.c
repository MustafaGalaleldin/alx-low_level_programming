#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	long int a = 612852475143;
	int b = 2;
	int c = a % b;
	int d;

	while (c == 0)
	{
		d = a / b;
		a = d;
		c = a % b;
	}
	printf("%d\n", d);
}




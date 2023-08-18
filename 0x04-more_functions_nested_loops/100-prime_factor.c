#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	long int a = 612852475143;
	long int b = 2;
	long int d;

	while (a / b != 1)
	{
		while (a % b  == 0)
		{
			d = a / b;
			a = d;
		}
	b++;
	}
	printf("%ld\n", a);
	return (0);
}




#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int x =  'z';

	while (x <= 122 && x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}

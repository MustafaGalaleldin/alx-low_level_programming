#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	while (i <= 7)
	{
	_putchar(c[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: sum
 */
void main(void)
{
	int sum = 0;
	int n = 1;
	int m = 1;
	int mul3 = 0;
	int mul5 = 0;

	while (mul3 < 1024)
	{
		sum += mul3;
		mul3 = n * 3;
		n++;
	}
	while (mul5 < 1024)
	{
		sum += mul5;
		mul5 = m * 5;
		m++;
	}
	printf("%d\n", sum);
}

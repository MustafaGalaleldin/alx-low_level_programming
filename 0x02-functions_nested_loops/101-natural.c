#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum;
	int sum3, sum5 = 0;
	int n = 0;
	int m = 0;
	int mul3 = 0;
	int mul5 = 0;

	while (mul3 < 1024)
	{
		sum3 += mul3;
		mul3 = n * 3;
		n++;
	}
	while (mul5 < 1024)
	{
		sum5 += mul5;
		mul5 = m * 5;
		m++;
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum1 = 1;
	int sum2 = 2;
	int count = 0;

	printf("1, 2, ");
	while (count < 49)
	{
		int sum = sum1 + sum2;

		printf("%d, ", sum);
		sum1 = sum2;
		sum2 = sum;
		count++;
	}
	putchar('\n');
	return (0);
}

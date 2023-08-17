#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int sum1 = 1;
	long int sum2 = 2;
	long int count = 0;

	printf("1, 2, ");
	while (count < 49)
	{
		long int sum = sum1 + sum2;

		printf("%ld, ", sum);
		sum1 = sum2;
		sum2 = sum;
		count++;
	}
	putchar('\n');
	return (0);
}

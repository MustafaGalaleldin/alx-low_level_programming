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
	long int count = 1;

	printf("1, 2, ");
	while (count <= 98)
	{
		long int sum = sum1 + sum2;

		printf("%ld", sum);
		if (count != 47)
		{
			printf(", ");
		}
		sum1 = sum2;
		sum2 = sum;
		count++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int sum1 = 1;
	long int sum2 = 1;
	long int sum;
	long int result;
	long int result0;

	while (sum < 4000000)
	{
		int sum = sum1 + sum2;

		sum1 = sum2;
		sum2 = sum;
		if (sum % 2 == 0)
		{
			result0 = sum;
			result += result0;
		}
	}
	printf("%ld\n", result);
	return (0);
}

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
	long int sum = 0;
	long int result = 0;

	while (sum < 4000000)
	{
		sum = sum1 + sum2;

		sum1 = sum2;
		sum2 = sum;
		if (sum % 2 == 0)
		{
			result += sum;
		}
	}
	printf("%ld\n", result);
	return (0);
}

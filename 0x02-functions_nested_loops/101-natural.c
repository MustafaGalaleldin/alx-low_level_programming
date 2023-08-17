#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int num = 0;

	while (num < 1024)
	{
		if ((num %3 == 0) || (num % 5 ==0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}

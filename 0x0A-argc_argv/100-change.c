#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: c
 * @argv: v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int c[] = {25, 10, 5, 2, 1};
		int pap = 0;
		int i;
		int m = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (m >= c[i])
		{
			pap += m / c[i];
			m = m % c[i];
			if (m % c[i] == 0)
				break;
		}
	}
	printf("%d\n", pap);
	return (0);
	}
}


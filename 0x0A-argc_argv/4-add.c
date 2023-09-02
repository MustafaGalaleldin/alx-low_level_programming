#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 * @argc: c
 * @argv: v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *z;
	int x = argc;

	while (--x)
	{
		for (z = argv[x]; *z; z++)
		{
			if (*z < '0' || *z > '9')
			{
			printf("Error\n");
			return (1);
			}
		sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

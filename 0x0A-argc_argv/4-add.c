#include <stdio.h>
#include <stdlib.h>

/**
 * pure - to detect pure numbers strings
 *
 * @c: string
 *
 * Return: 1 if pure numbers 0 if mixed
 */

int pure(char *c)
{
	int i;

	for (i = 0; *c != '\0'; i++, c++)
	{
		if (*c >= 48 && *c <= 57)
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * main - entry point
 *
 * @argc: args counter
 * @argv: args vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (pure(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * ch_num - check
 * @str: str
 *
 * Return: 0
 */
int ch_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: c
 * @argv: v
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int c;
	int z;
	int sum = 0;

	c = 1;
	while (c < argc)
	{
		if (ch_num(argv[count]))

		{
			z = atoi(argv[count]);
			sum += z;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", sum);

	return (0);
}


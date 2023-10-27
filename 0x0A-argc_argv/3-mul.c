#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 3)
		return ((atoi(argv[1])) * (atoi(argv[2])));

	printf("Error\n");
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entry
 *
 * @ac: args counter
 * @av: args vector
 *
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int c;
	char *v;

	v = (char *)main;
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	c = atoi(av[1]);
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (c)
	{
		printf("%02hhx%s", *v++, c ? " " : "\n");
		c--;
	}
	return (0);
}


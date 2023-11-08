#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - entry point
 *
 * @ac: args counter
 * @av: args vector
 *
 * Return: 0 in success
 */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2] != '+' || av[2] != '-' || av[2] != '*' ||
			av[2] != '/' || av[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2] == '/' && av[3] == '0') || (av[2] == '%' && av[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}





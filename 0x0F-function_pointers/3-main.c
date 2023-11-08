#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "calc.h"

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
	int a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' && *av[3] == '0') || (*av[2] == '%' && *av[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	printf("%d\n", get_op_func(av[2])(a, b));
	return (0);
}

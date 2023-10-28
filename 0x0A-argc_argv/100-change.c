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
	int x;
	int r = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	while (x)
	{
		if (x >= 25)
		{
			x -= 25;
			r++;
			continue; }
		if (x >= 10)
		{
			x -= 10;
			r++;
			continue;
		}
		if (x >= 5)
		{	x -= 5;
			r++;
			continue; }
		if (x >= 2)
		{	x -= 2;
			r++;
			continue; }
		if (x >= 1)
		{	x -= 1;
			r++;
			continue; }
	}
	printf("%d\n", r);
	return (0);
}

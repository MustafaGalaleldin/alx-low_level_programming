#include <stdlib.h>
#include "main.h"

/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int x, y, c1 = 0, c2 = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		c1 += _strlen(av[x]);
		c1++;
	}
	p = malloc((c1 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, c2++)
		{
				p[c2] = av[x][y];
		}
		p[c2] = '\n';
		c2++;
	}
	p[c2] = '\0';
	return (p);
}

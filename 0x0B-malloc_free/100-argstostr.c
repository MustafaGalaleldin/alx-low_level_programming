#include "main.h"
#include <stdlib.h>
/**
 * _strlen - l
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * argstostr -  concatenates all the arguments of your program.
 *
 * @ac: number
 * @av: args vector
 *
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int len = 0, x, y, z = 0;
	char *ptr;

	for (x = 0; x < ac; x++)
		len += _strlen(av[x]) + 1;
	len++;
	ptr = malloc(len);
	if (ac == 0 || av == NULL || ptr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; y <= _strlen(av[x]); y++, z++)
		{
			if (y == _strlen(av[x]))
				ptr[z] = '\n';
			else
				ptr[z] = av[x][y];
		}
	}
	ptr[z] = '\0';
	return (ptr);
}

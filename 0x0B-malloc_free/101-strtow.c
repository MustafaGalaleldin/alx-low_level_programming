#include <stdlib.h>
#include "main.h"

/**
 * _wrdlen - l
 * @s: input
 * Return: length
 */
int _wrdlen(char *s)
{
	int count = 0;

	while (*s == ' ')
		s++;
	while (*s != ' ')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * wc - words counter
 *
 * @str: string
 *
 * Return: number of words
 */
int wc(char *str)
{
	int c = 0, x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((str[x] != ' ' && str[x + 1] == ' ') ||
				(str[x + 1] == '\0' && str[x] != ' '))
			c++;
	}
	return (c);
}
/**
 * strtow - splits a string into words.
 *
 * @str: string
 *
 * Return: pointer to array of strings or NULL
 */

char **strtow(char *str)
{
	int x, y, z, a, b = 0, c = 0;
	char **p;

	b = wc(str);
	if (b == 1)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * b);
	if (!str || *str == '\0' || !p)
		return (NULL);
	p[b - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (str[x - 1] == ' ' || x == 0))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
		y++;
		p[c] = (char *)malloc(sizeof(char) * y);
		y--;
		if (p[c] == NULL)
		{
			for (z = 0; z < c; z++)
				free(p[z]);
			free(p[b - 1]);
			free(p);
			return (NULL);
		}
		for (a = 0; a < y; a++)
			p[c][a] = str[x + a];
		p[c][a] = '\0';
		c++;
		x += y;
		}
	else
		x++;
	}
	return (p);
}

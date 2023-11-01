#include <stdlib.h>
#include "main.h"

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
		if (str[x] == ' ')
		{
			if (str[x + 1] != ' ' && str[x + 1] != '\0')
				c++;
		}
		else if (x == 0)
			c++;
	}
	c++;
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
	int x, y, a, b = 0, c = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	b = wc(str);
	if (b == 1)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * b);
	if (p == NULL)
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

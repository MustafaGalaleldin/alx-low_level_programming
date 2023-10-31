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
		if (str[x + 1] == '\0' && str[x] != '\t')
			c++;
		else if (str[x] != '\t' || (str[x] == '\t' && str[x + 1] == '\t'))
			continue;
		else if (str[x - 1] != '\t')
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
	int x, y, c;
	c = wc(str);
	char **p = malloc(sizeof(*p) * c);

	if (!str || str == "" || !p)
		return (NULL);
	for (x = 0;)


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

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory with str c
 * @str: str
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == 0)
		return (0);

	p = malloc(sizeof(char) * _strlen(str) + 1);

	if (p == 0)
	{
		return ('\0');
	}
	for (i = 0; i < _strlen(str) + 1; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

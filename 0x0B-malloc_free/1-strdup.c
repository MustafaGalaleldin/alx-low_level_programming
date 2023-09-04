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
	char *p = malloc(sizeof(char) * _strlen(str));

	if (p == 0 || str == 0)
	{
		return (0);
	}
	return (p);
}

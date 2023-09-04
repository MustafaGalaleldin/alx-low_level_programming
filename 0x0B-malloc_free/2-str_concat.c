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
 * str_concat - concatenates two strings
 * @s1: str1
 * @s2: str2
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *r;
	int i, j, size1 = _strlen(s1);
	int size2 = _strlen(s2) + 1;
	int size = size1 + size2;

	r = malloc(size * sizeof(*r));
	if (r == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		r[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		i++;
		r[i] = s2[j];
	}
	return (r);
}

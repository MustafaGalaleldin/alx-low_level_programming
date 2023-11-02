#include "main.h"
#include <stdlib.h>
/**
 * _strlen - l
 * @s: input
 * Return: length
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

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
 * string_nconcat - concatenates two strings
 *
 * @s1: str 1
 * @s2: str 2
 * @n: num of bytes
 *
 * Return: pointer to concatenated str or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i = 0, j = 0;
	char *p;

	if (n >= _strlen(s2))
		len = _strlen(s1) + _strlen(s2) + 1;
	else
		len = _strlen(s1) + n + 1;
	p = malloc(len);
	if (!p)
		return (NULL);
	if (s1)
	{
		for (; s1[i] != '\0'; i++)
			p[i] = s1[i];
	}
	if (s2)
	{
		for (; i < len; j++, i++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}


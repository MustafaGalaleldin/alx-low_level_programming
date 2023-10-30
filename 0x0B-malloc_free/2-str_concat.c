#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates two strings and put them into space pointed
 * @dest: string
 * @src: tring
 * @p: pointer to space of two strings
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src, char *p)
{
	int i = 0, j = 0;

	if (dest)
	{
		for (; dest[i] != '\0'; i++)
		{
			p[i] = dest[i];
		}
	}
	if (src)
	{
		for (; src[j] != '\0'; j++, i++)
		{
		p[i] = src[j];
		}
	}
		p[i] = '\0';
		return (p);
}

#include "main.h"
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
 * str_concat - concatenates two strings.
 *
 * @s1: str1
 * @s2: str2
 *
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int len = _strlen(s1) + _strlen(s2) + 1;
	char *p = malloc(len);

	if (p)
	{
		p = _strcat(s1, s2, p);
		return (p);
	}
	return (NULL);
}

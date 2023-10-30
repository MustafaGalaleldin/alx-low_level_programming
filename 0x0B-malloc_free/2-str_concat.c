#include "main.h"
#include <stdlib.h>

/**
 * _strcat -  concatenates two strings.
 * @dest: string
 * @src: tring
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
		for (i = 0; dest[i] != '\0'; i++)
		{
			;
		}
		for (j = 0; src[j] != '\0'; j++, i++)
		{
		dest[i] = src[j];
		}
		dest[i] = '\0';
		return (dest);
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
		p = _strcat(s1, s2);
		return (p);
	}
	return (NULL);
}

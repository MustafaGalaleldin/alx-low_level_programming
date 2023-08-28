#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: str1
 * @accept: str2
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		break;
	}
	return ('\0');
}

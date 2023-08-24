#include "main.h"

/**
 *  _strcmp :  compares two strings
 *  @s1: 1st str
 *  @s2: 2nd str
 *  Return: difference value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

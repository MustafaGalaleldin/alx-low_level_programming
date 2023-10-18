#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: string
 * Return: integer or 0 if no integer
 */

int _atoi(char *s)
{
	int ch = 0;
	char *str = s;
	int res = 0;
	int cond;

	while (s && !(*(s + 1) >= 48 && *(s + 1) <= 57))
	{
		if (*s == '-')
			ch++;
		s++;
	}
		if (*(s + 1) == '-')
			ch++;
		if (ch % 2 == 0)
			cond = 0;
		else
			cond = 1;

		while (str && (*str >= 48 && *str  <= 57))
		{
			res = res * 10 + (*str - '0');
			str++;
		}
		if (cond)
			res = -res;
		return (res);
}

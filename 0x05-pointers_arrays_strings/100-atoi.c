#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: string
 * Return: integer or 0 if no integer
 */

int _atoi(char *s)
{
	int ch = 0;
	int result = 0;
	int cond;

	/* to calculate the initial negative signs */
	while (*s != 0 && !(*(s + 1) >= 48 && *(s + 1) <= 57))
	{
		if (*s == '-')
			ch++;
		s++;
	}
		if (*s == '-')
			ch++;

		/* to set the sign */
		if (ch % 2 == 0)
			cond = 0;
		else
			cond = 1;

		while (*s != 0)
		{
			if (*s >= 48 && *s <= 57)
				result = result * 10 + (*s - '0');
			s++;

			/* to stop at the first integer sequence*/
			if (!(*s >= 48 && *s <= 57))
				break;
		}
		if (cond)
			result = -result;
		return (result);
}

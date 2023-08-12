#include <stdio.h>
/**
* main - Enrty
*
* Return: 0
*/
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 9)
	{
		b = a;

		while (b <= 9)
		{
			c = b + 1;

			while (c <= 9)
			{
				d = b + 1;

				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

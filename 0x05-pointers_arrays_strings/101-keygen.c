#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - key point
 * 
 * Return: 0 if true
*/
int main(void)
{
	char x;
	int count = 0, i = 0, c = 1;

	srand(time(NULL));
	while (count < 0xad4)
	{
		if (count < 2772 && count > 2645){
			c = 0; /*c is a sign to do or not to do the next while loop*/
			x = 2772 - count;
		}
		while (c){
			x = rand() % 127;
			if (x < 127 && x > 31)
				break;
		}
		putchar(x);
		count += x;
		if (count == 0xad4){
			break;
		}
		i++;
	}
	return (0);
}
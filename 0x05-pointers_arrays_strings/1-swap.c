#include "main.h"
/**
 * swap_int - swapping
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	*&a = b;
	*&b = a;
}

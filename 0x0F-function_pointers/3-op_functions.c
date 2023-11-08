#include "calc.h"
#include "function_pointers.h"
/**
 * op_add - addition
 *
 * @a: n1
 * @b: n2
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub
 *
 * @a: n1
 * @b: n2
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 *
 * @a: n1
 * @b: n2
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 *
 * @a: n1
 * @b: n2
 *
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod
 *
 * @a: n1
 * @b: n2
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}

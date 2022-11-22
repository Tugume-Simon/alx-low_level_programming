#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference between 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a takeaway b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds quotient of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a out-of b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulus of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a modulus b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

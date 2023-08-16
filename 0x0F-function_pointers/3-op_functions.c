#include "3-calc.h"
/**
 * op_add - returns sum of a & b
 * @a: integer to be added
 * @b: integer to be added
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b.
 * @a: integer for op_sub
 * @b: integer for op_sub
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: integer for op_mul
 * @b: integer for op_mul
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: integer for op_div
 * @b: integer for op_div
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: integer for op_mod
 * @b: integer for op_mod
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

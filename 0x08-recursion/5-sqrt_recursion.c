#include "main.h"

/**
 * addi_function - function built to support the _sqrt_recursion function
 * @nr: a reference to n in _sqrt_recursion function
 * @root: that can be multipled by itself to get/match n
 * Return: 0 if successful
 */
int addi_function(int nr, int root)
{
	if ((root * root) > nr || (root * root) < 0)
	{
		return (-1);
	}
	else if ((root * root) == nr)
	{
		return (root);
	}
	else
	{
		return (addi_function(nr, root + 1));
	}
	return (0);
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number for natural square root. passes value to addi_function
 * Return: always 0
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (addi_function(n, 0));
	}
	return (0);
}

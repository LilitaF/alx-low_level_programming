#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: input number to be raised to the power to y
 * @y: input number
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
		y++;
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (0);
}

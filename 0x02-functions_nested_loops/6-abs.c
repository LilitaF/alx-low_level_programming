#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @a: variable to be compared.
 * Return: 0 if successful otherwise 1 upon error.
 */
int _abs(int a)
{
	int a;

	if (a < 0)
		return (-a);
	else
		return (a);
	return (0);
}

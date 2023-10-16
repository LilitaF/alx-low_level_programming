#include "main.h"
/**
 * _isdigit - function that checks if c is a digit
 * @c: variable to be checked
 * Return: 1 if c is a digit and 0 if otheerwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

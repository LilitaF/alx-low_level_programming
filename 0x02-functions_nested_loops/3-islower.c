#include "main.h"
/**
 * _islower - checks for lowercase character in program.
 * c - variable to be checked
 * Return: 1 if successful otherwise 0 if no lowercase is found.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}

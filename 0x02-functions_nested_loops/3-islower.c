#include "main.h"
/**
 * _islower - checks for lowercase character in program.
 * c - variable to be checked
 * Return: 1 if successful otherwise 0 if no lowercase is found.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return(1);
	else
		return(0);
}

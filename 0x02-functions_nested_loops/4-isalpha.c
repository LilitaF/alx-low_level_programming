#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: variable to be checked.
 * Return: 1 if successful otherwise 0 if not alphabetic character
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

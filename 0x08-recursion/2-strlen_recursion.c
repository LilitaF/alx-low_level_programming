#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

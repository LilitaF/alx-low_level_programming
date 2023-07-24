#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: variable of the string in question
 * Return: q
 */
int _strlen(char *s)
{
	int q = 0;

	while (s[q] != '\0')
		++q;

	return (q);
}

#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: variable of the string in question
 * Return: always 0
 */
int _strlen(char *s)
{
	int q;

	for (q = 0; s[q] != '0'; ++q);

	return (q);
}

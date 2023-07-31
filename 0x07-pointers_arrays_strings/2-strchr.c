#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: string in which character location is to happen
 * @c: character to be located
 * Return: a pointer to character c in the string s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int a; /*used for index of s*/

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}

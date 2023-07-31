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

	for (a = 0; s[a] > '\0'; a++)
	{
		if (s[a] != c)
			s++;
	}
	if (c == '\0') /* NULL is included in the search*/
		return (NULL);
	else
		return (s);
	return (s);
}

#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: basically s is searched for any bytes that appears in it
 * @accept: contains any bytes that need to be searched in s
 * Return: char found that matches bytes in accept from s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}

#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string that needs to be searched for bytes
 * @accept: string to be seached for the bytes from s
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	/*above used for index of s and accept*/

	for (a = 0; s[a] != '\0'; a++)
	{
		b = 0;
		while (s[a] != accept[b])
		{
			if (accept[b] == '\0')
				return (a);
			b++;
		}
	}
	return (0);
}

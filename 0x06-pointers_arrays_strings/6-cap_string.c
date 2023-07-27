#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string with words that need to be capitalized
 * Return: capitalised string
 */
char *cap_string(char *s)
{
	int a; /*will be used for s*/

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z') /*check condition to continue*/
			s[a] = s[a] - 32; /* use ascii, count 32 backwards from 'z'*/
	}
	return (s);
}

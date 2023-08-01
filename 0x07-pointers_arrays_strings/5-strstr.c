#include "main.h"
/**
 * _strstr -  locates a substring.
 * @haystack: string that needs to be searched for substring needle
 * @needle: substring that needs to be found in haystack
 * Return: pointer to the beginning of the located substring
 *
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] == haystack[a])
				return (needle);
		}
	}
	return ('\0');
}

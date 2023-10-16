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
		b = 0;
		while (haystack[a] == needle[b] && needle[b] != '\0')
		{
			haystack++;
			b++;
		}
		if (needle[b] == '\0')
			return (haystack);
	}
	return ('\0');
}

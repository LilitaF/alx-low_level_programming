#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string that will be concatenated
 * @s2: second string to be concatenated to s1
 * @n: bytes of s2 to be concatenated
 * Return: pointer to point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t = 0;
	unsigned int x = 0;
	unsigned int size;
	char *s3;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[t] != '\0')
	{
		t++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	if (n >= x)
	{
		n = x;
	}
	size = t + x;

	s3 = malloc(sizeof(char) * (size + 1));
	if (s3 == NULL)
		return (NULL);
	for (t = 0; s1[t] != '\0'; t++)
	{
		s3[t] = s1[t];
	}
	for (x = 0; x < n; x++)
	{
		s3[t + x] = s2[x];
	}
	s3[t + x] = '\0';
	return (s3);
}

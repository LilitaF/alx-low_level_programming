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
	unsigned int t = 0; /* for length s1*/
	unsigned int x = 0; /*for length of s2*/
	unsigned int size;
	char *s3;

	while (s1[t] != '\0') /*length s1*/
	{
		t++;
	}
	while (s2[x] != '\0') /*length s2*/
	{
		x++;
	}
	if (n >= x)
	{
		n = x;
	}
	size = t + x;

	s3 = malloc(sizeof(char) * (size + 1));

	if (s1 == NULL || s2 == NULL)
	{
		return (""); /*refers to empty string*/
	}
	if (s3 == NULL)
	{
		return (NULL);
	}
	/*concatenation*/
	for (t = 0; s1[t] != '\0'; t++)
	{
		s3[size] = s1[t];
	}
	for (x = 0; x != n; x++)
	{
		s3[size] = s2[x];
		t++;
	}
	s3[size] = '\0'; /*makes sure to include NULL terminator*/
	return (s3);
}

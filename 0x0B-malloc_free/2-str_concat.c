#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer towards the concatenated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *s3;

	s3 = (char *) malloc(((len1 + len2) + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		s3[len1] = s1[len1];
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		s3[len1] = s2[len2];
		len1++;
	}
	free(s3);
	return (s3);
}

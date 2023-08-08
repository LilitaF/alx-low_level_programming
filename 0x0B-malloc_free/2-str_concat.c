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
	int a;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
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

	for (a = 0; a < len1; a++)
	{
		s3[a] = s1[a];
	}
	for (a = 0; a < len2; a++)
	{
		s3[len1 + a] = s2[a];
	}
	s3[(len1 + len2 + 1)] = 0;
	return (s3);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter. string duplicate
 *  returns a pointer to a new string which is a duplicate of the string str
 * @str: string to be duplicated
 * Return:  pointer to the duplicated string or
 *  NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int a = 0;
	int b;
	char *str2;
	int len1 = strlen(str);

	str2 = (char *) malloc((len1 + 1) * sizeof(char));

	if (str == NULL || str2 == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < len1 + 1; b++)
		{
			str2[b] = str[b];
		}
	}
	str2[len1 + 1] = '\0';
	return (str2);
}

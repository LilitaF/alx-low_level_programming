#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: first string to be compared
 * @s2: seocnd string to be compared
 * Return: result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++) /* are not include NULL*/
	{
		if (s1[a] != s2[a]) /*if they not equal execute statement below*/
			return (s1[a] - s2[a]);
		a++;
	}
	if (s1[a] == s2[a]) /*if they are equal then provide 0 as a result*/
		return (0);
	return (s1[a] - s2[a]);
}

#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 * Return: always 0
 */
int _atoi(char *s)
{
	int n;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 48 || s[a] > 57)
			return (0);
		else
		{
			n = n * 10 + (s[a] - 48);
			a++;
		}
	}
	return n;
}	

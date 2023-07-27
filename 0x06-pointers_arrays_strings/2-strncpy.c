#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source string
 * @: n bytes
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++) /*n bytes must be greater than a*/
		dest[a] = src[a];

	while (a < n) /* if string is shorter than n, NULL is induced*/
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

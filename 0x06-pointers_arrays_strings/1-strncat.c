#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @src: string source to be concatenated
 * @dest: string destination that source will concatenate
 * @n: bytes from source
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;/*use for length of dest*/

	for (b = 0; dest[b] != '\0'; b++)
		;
	/* function used to track length dest*/

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	return (dest); /*pointer returned*/
}

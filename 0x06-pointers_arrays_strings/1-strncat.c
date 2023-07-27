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
	int a = 0;
	int b;/*use for length of dest*/

	for (a = 0; dest[a] != '\0'; a++)
		b++;/* function used to track length dest*/

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[b + a] = *src;
		src++;
	}
	dest[b + a] = '\0'; /* inserts NULL*/
	return (dest); /*pointer returned*/
}

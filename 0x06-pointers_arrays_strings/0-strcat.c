#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination of string to be concatenated.
 * @src: string source to be concatenated
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b = 0; /* for length of dest*/
	int c = 0; /* for length of src */

	for (a = 0; dest[a] != '\0'; a++)
		b++; /* this will keep track of length of dest */
	for (a = 0; src[a] != '\0'; a++)
		c++; /* keeps track of length of src */
	for (a = 0; a <= c; a++) /* = makes space for NULL */
		dest[b + a] = src[a];

	return (dest);
}

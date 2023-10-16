#include "main.h"
/**
 * _strcpy -  copies the string, including the terminating null byte (\0)
 * @dest: pointer to buffer meant to recieve the copied string
 * @src: pointer to the string meant to be copied
 * Return: string of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: bytes to be copied from src
 * @src: pointer which n is copied from
 * @dest: pointer in which n needs to be copied to
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		src[a] = dest[a];
		a++;
	}
	return (dest);
}

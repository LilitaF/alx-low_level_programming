#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory area
 * @n: number of bytes to be filled by b
 * @b: constant byte
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;/* a is used as an index for pointer s*/

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in an array
 * Return: has no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int b = n - 1;
	int c;

	for (i = 0; i < b; i++, b--)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}

#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: integer 1 to be swapped
 * @b: integer 2 to be swapped
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonal of a square matrix
 * @a: array
 * @size: size of the array
 * Return: sum of matrix
 */
void print_diagsums(int *a, int size)
{
	int z;
	int x = 0;
	int y = 0;

	/*for size * size, diagionals need to be multipled for the sum*/
	for (z = 0; z < size * size; z += (size + 1))
	/* + 1 because x is increasing diaginally*/
	{
		x += a[z];
	}
	/* - 1 because y is decreasing diagionally*/
	for (z = (size - 1); z < ((size * size) - (size - 1)); z += (size - 1))
	{
		y += a[z];
	}
	printf("%d, %d\n", x, y);
}

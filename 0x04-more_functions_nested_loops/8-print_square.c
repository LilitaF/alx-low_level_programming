#include "main.h"
/**
 * print_square - function that prints a square
 * @size:  size of the square
 * Return: no return.
 */
void print_square(int size)
{
	int a;
	int b;

	if (size >  0)
	{
		for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar('\n');

	}
		_putchar('\n');
	}
}

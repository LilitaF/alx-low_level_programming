#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size:  is the size of the triangle
 * Return: has no return
 */
void print_triangle(int size)
{
	int g = 0;
	int h = 0;

	if (size <= 0)
		_putchar('\n');
	for (g = 1; g <= size; ++g)
	{
		for (h = g; h < size; ++h)
		{
			_putchar(' ');
		}
		for (h = 1; h <= g; ++h)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

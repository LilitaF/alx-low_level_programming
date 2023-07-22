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

	a = 0;

	if (size <= 0)
		_putchar('\n');
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}

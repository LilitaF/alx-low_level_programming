#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: variable to be printed
 * Return: has no return.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y;
		int z;

		for (y = 0; y <= n; y++)
		{
			for (z = 0; z <= y; z++)
				_putchar(' ');
			_putchar('_');
		_putchar('\n');
		}
	}
}

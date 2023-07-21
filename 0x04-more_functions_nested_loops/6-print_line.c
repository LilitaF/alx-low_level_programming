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

		for (y = 0; y <= n; y++)
			_putchar('_');
		_putchar('\n');
	}
}

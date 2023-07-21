#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: variable
 * Return; no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h;
		int m;

		for (h = 0; h < n; h++)
		{
			for (m = 0; m < h; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_times_table - function that prints time tables
 * @n: integer to be multiplied
 * Return: no return
 */
void print_times_table(int n)
{
	int s;
	int k;

	for (n >= 0; n <= 15; n++)
	{
		_putchar('0');

		for (s = 1; s <= 15; s++)
		{
			_putchar(',');
			_putchar(' ');

			k = n * s;

			if (k <= 15)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * times_table - function that created a times table.
 * Return: has no return (void).
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48);

			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}

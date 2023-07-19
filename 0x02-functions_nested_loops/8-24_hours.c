#include "main.h"
/**
 * jack_bauer - entry point of this program
 * Return: has no return.
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(58);
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: has no return
 */
void more_numbers(void)
{
	int a;
	int k;

	for (a = 0; a <= 10; a++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}

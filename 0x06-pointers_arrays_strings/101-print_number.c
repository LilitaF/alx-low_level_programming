#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer/number to be printed
 * Return: has no return
 */
void print_number(int n)
{
	
	if (n < 0)
	{ /*for negative numbers*/
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else 
		_putchar(n / 10);
	_putchar((n % 10) + '0');
}

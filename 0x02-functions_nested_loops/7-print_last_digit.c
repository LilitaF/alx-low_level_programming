#include "main.h"
/**
 * print_last_digit - function that finds the last digit of a number
 * @a: input number to be compared
 * Return: 0 if successful otherwise 1 upon error
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * Return: 0 if successful otherwise 1 on error.
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

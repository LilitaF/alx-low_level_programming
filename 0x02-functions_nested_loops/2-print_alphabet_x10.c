#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * Return: 0 if successful otherwise 1 on error.
 */
void print_alphabet_x10(void)
{
	int a;

	while (a < 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		a++;
	}
}

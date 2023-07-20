#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9 expect 2 and 4
 * Return: has no return
 */
void print_most_numbers(void)
{
	int z;
	
	for (z = 0; z <= 9; z++)
	{
		if (z != 2 && z != 4)
			_putchar(z + '0');
	}
	_putchar('\n');
}

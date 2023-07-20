#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - functions that find and prints natural number
 * @n: starting point of natural numbers.
 * Return: noting to return.
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
			n--;
	}
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 * Return: has no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		/*to ensure that the separator is not printed after the last nr*/
		if (a > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(list, const unsigned int));
	}
	printf("\n");

	va_end(list);
}

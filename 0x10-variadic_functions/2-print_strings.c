#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings e.g ','
 * @n: number of strings passed to the function
 * Return: has no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		char *string;

		string = va_arg(list, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

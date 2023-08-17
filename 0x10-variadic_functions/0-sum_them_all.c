#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(list, const unsigned int);
	}

	va_end(list);

	return (sum);
}

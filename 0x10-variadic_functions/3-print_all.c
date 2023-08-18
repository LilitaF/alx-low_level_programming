#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: has no return
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int char_c, in;
	float f;
	char *s, *com = "";

	va_list flist;

	va_start(flist, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_c = va_arg(flist, int);
				printf("%s%c", com, char_c);
				break;
			case 'i':
				in = va_arg(flist, int);
				printf("%s%d", com, in);
				break;
			case 'f':
				f = va_arg(flist, double);
				printf("%s%f", com, f);
				break;
			case 's':
				s = va_arg(flist, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s%s", com, s);
				break;
		}
		com = ", ";
		i++;
	}
	printf("\n");
	va_end(flist);
}

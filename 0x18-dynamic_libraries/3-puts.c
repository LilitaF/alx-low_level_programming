#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to standard output
 * @str: string to be printed to standard output
 * Return: no return(void)
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}

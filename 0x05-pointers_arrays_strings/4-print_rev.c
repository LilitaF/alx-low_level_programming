#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be reversed
 * Return: no return
 */
void print_rev(char *s)
{
	int a;
	int length = 0;

	for (a = 0; s[a] != '\0'; a++)
		length++;
	for (a = length - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}

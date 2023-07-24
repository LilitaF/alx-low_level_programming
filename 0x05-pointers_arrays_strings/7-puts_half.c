#include "main.h"
/**
 * puts_half - prints half a string, followed by a new line
 * @str: string to be printed in half
 * Return: has no return
 */
void puts_half(char *str)
{
	int n;
	int a;
	int length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	n = (length - 1) / 2;

	for (a = n + 1; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

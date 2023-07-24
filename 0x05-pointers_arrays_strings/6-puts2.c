#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string of every other charcter to be printed
 * Return: has no return
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}

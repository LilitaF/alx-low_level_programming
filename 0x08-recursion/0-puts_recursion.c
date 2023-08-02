#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: string to be printed
 * Return: has no return
 */
void _puts_recursion(char *s)
{
	int a = 0; /*created and given value cause s is a pointer*/

	if (s[a] == '\0')
	{
		_putchar('\n'); /* if NULL is reached provide new line*/
	}
	else
	{
		_putchar(s[a]);
		_puts_recursion(s + (a + 1));
	}
}

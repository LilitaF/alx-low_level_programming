#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * Return: 0 if successful otherwise 1 upon error
 */
void print_alphabet(void);
{
	int a;

	for (a = 97; a <= 122; a++)

	{
		putchar(a);
	}
	putchar('\n');
}

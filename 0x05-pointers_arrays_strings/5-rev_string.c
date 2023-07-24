#include "main.h"
/**
 * rev_string - reverses a string
 * @s: variable to be used to reverse a string
 * Return: has no return
 */
void rev_string(char *s)
{
	int a;
	int length = 0;

	for (a = 0; s[a] != '\0'; a++)
		length++;
	for (a = 0; a < length / 2 ; a++)
	{
		char v;

		v = s[a];
		s[a] = s[length - 1 - a];
		s[length - 1 - a] = v;
	}
}

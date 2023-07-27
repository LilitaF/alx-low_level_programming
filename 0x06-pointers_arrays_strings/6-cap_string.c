#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string with words that need to be capitalized
 * Return: capitalised string
 */
char *cap_string(char *s)
{
	int a = 0; /*will be used for s*/

	while (s[a])
	{
	while (!(s[a] >= 'a' && s[a] <= 'z'))
	a++;
	if (s[a - 1] == ' ' || /* - 1, to account for NULL*/
	s[a - 1] == '\t' ||
	s[a - 1] == '\n' ||
	s[a - 1] == ',' ||
	s[a - 1] == ';' ||
	s[a - 1] == '.' ||
	s[a - 1] == '!' ||
	s[a - 1] == '?' ||
	s[a - 1] == '"' ||
	s[a - 1] == '(' ||
	s[a - 1] == ')' ||
	s[a - 1] == '{' ||
	s[a - 1] == '}' ||/* all quoted are word separates*/
	a == 0)
	s[a] -= 32; /*ascii number subtraction, count 32 backwards from z*/
	a++;
	}
	return (s);
}

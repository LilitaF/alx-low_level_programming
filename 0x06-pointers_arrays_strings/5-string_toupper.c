#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: uppercase characters
 */
char *string_toupper(char *s)
{
	int a; /*used for s*/

	for (a = 0; s[a] != '\0'; a++)
	{
		if ( s[a] >= 'a' && s[a] <= 'z') /*checks condition*/
			s[a] = s[a] - 32; /*32(ascii diff) is subtracted to make uppercase*/
	}
	return (s);
}

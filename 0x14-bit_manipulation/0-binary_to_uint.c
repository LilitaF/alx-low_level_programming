#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int end_res = 0;
	int a;
	char ch;


	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		ch = b[a];
		if (ch == '0' || ch == '1')
		{
			end_res = end_res << 1;
			end_res = end_res + ch - '0';
			/*power = len - 1 - a;*/
			/* integer literal 1, u means it is an unsigned int*/
			/* << is a bitwise left shift operator*/
			/* shifts bits to the left by the number specified*/
			/* on the right*/
			/*contr = 1u << power;*/
			/*end_res = end_res + contr;*/
		}
		else /*if (b[a] != '0')*/
		{
			return (0);
		}
	}
	return (end_res);
}

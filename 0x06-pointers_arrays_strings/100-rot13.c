#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded using rot13
 * Return: encoded string
 */
char *rot13(char *str)
{
	int a; /* used for str*/
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/*for str2 swap bottom half of uppercase, same for the lowercase for match*/
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int b; /*used for str1 and str2*/

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; str1[b] != '\0'; b++)
		{
			if (str[a] == str1[b])
			{
				str[a] = str2[b];
				break;
			}
		}
	}
	return (str);
}

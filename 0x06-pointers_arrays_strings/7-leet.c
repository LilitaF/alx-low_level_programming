#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int a; /* will be used for str*/
	int b; /* will be used for str1 and str2*/
	char str1[] = "AaEeOoTtLl";
	char str2[] = "4433007711"; /*doubled to account fo double letters*/

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++) /* 10 = characters in str1 & str 2*/
		{
			if (str[a] == str1[b])
			{
				str[a] = str2[b];
			}
		}
	}
	return (str);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int i;
	char *result;
	int current_position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_len += str_len(av[i]) + 1;/*+1 for new line char*/
	}

	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str_cpy(result + current_position, av[i]);
		current_position += str_len(av[i]);
		result[current_position++] = '\n';
	}
	result[total_len] = '\0';
	return (result);
}
/**
 * str_len - calculates the length of a string
 * @str: string
 * Return: length of a string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * str_cpy - string copy function
 * @dest: destination
 * @src: source
 * Return: string that has been copied
 */
void str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

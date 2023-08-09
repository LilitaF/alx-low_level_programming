#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds postive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 1;
	int num = 0;
	/*used to access the argv array which has stored pointrs*/
	char *p;
	int b;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			p = argv[a];

			for (b = 0; p[b] != '\0'; b++)
			{
				if (*argv[a] < '0' || *argv[a] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		num = num + atoi(argv[a]);
	}
	printf("%d\n", num);
	return (0);
}

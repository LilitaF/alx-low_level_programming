#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argv: argument vector, prints string command line argument
 * @argc: argument count, counts command line agrument
 * Return: 0 if successful 1 on error
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int num3 = num1 * num2;
	int a;
	int num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (a = 3; a < argc; a++)
	{
		num = atoi(argv[a]);
		num3 = num3 * num;
	}

	printf("%d\n", num3);
	return (0);
}

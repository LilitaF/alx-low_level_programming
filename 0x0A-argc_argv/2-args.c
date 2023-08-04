#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argv: argument vector, prints string command line arguments
 * @argc: argument count, counts command line arguments
 * Return: 0 if successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

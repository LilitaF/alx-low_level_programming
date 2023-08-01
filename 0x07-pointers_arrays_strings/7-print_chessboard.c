#include "main.h"
/**
 * print_chessboard - prints chessboard (its in the name)
 * @a: array for the chessboard
 * Return: has no return
 */
void print_chessboard(char (*a)[8])
{
	int z;
	int x;

	for (z = 0; z < 8; z++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[z][x]);
		}
		_putchar('\n');
	}
}

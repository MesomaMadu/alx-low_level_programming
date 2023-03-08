#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: input
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		_putchar('\n');
		}
	}
}

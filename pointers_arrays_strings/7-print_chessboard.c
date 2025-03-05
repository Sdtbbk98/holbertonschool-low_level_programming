#include "main.h"

/**
 * print_chessboard - function that print chessboard
 * @a: char, variable of 8x8
 * Return: nada
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int colmns;

	for (rows = 0; rows < 8; rows++)
	{
		for (colmns = 0; colmns < 8; colmns++)
		{
			_putchar(a[rows][colmns]);
		}
		_putchar('\n');
	}
}

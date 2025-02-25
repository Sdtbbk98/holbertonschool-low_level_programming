#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n: int, number of \ characte should printed
 *Return: nada
 * row - row or line
 * clm - column vertical line
 */

void print_diagonal(int n)
{
	int row;
	int clm;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < n; row++)
	{
		for (clm = 0; clm < row; clm++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

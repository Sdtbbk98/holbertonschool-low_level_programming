#include "main.h"

/**
 * print_square -that print a square
 *
 * @size: int, is the size of square
 * row - horizontal lines
 * clm - column vertical lines
 * Return: nada
 */

void print_square(int size)
{
	int row, clm;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (clm = 0; clm < size; clm++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_triangle - function entry and it print a triangle
 *@size: the size of triangle
 * row - int, rows of our triangle
 * clm - int, columns
 * hash _ int; our hash it calculate the square where want it
 */

void print_triangle(int size)
{
	int row = size;
	int clm;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (row > 0)
	{
		clm = row;
		while (clm > 1)
		{
			_putchar(' ');
			clm--;
		}
		hash = size - row;
		while (hash >= 0)
		{
			_putchar('#');
			hash--;
		}
		row--;
		_putchar('\n');
	}
}

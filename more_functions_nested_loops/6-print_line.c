#include "main.h"

/**
 * print_line -draw a straight line
 *
 * @n: number of line (_)
 * d_line - display line
 * Return: void nada
 *
 */

void print_line(int n)
{
	int d_line;

	if (n > 0)/*if i declare this in for loop than i have one less '_'*/
	{
		for (d_line = 0; d_line < n; d_line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

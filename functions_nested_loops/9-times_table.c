#include "main.h"

/**
 * times_table -function that print the 9 times table, start with 0
 *
 * n_times -10*10 table 0 >=n_times<=9
 * n_times_roms - number of rows
 * n_times_columns - number of columns
 * square -to find the position and value( rows * columns)
 * first_digit - case of _putchar limitation dont accept 2 digits number
 * last_digit - same as @first_digit number
 *
 * Return: void nada
 */

void times_table(void)
{
	int n_times = 9;
	int n_times_rows, n_times_columns;
	int square; /* is n_times_rows * n_times_columns */
	int first_digit;
	int last_digit;

	for (n_times_rows = 0; n_times_rows <= n_times; n_times_rows++)
	{
		for (n_times_columns = 0; n_times_columns <= n_times; n_times_columns++)
		{
			square = n_times_rows * n_times_columns;
			if (square > 9)
			{
				first_digit = square / 10;
				last_digit = square % 10;
				if (n_times_columns == 9)
				{
					_putchar(first_digit + '0');
					_putchar(last_digit + '0');
				}
				else
				{
					_putchar(first_digit + '0');
					_putchar(last_digit + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (n_times_columns == 9)
				{
					_putchar(' ');
					_putchar((square % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((square % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

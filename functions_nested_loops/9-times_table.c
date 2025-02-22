#include "main.h"
/**
 * times_table -function that print the 9 times table, start with 0
 * n_times -10*10 table 0 >=n_times<=9
 * n_times_roms - number of rows
 * n_times_columns - number of columns
 * square -to find the position and value( rows * columns)
 * Return: void nada
 */
void times_table(void)
{
	int n_times = 9;
	int n_times_rows, n_times_columns;
	int square; /* is n_times_rows * n_times_columns */

	for (n_times_rows = 0; n_times_rows <= n_times; n_times_rows++)
	{
		for (n_times_columns = 0; n_times_columns <= n_times; n_times_columns++)
		{
			square = n_times_rows * n_times_columns;
			if (square > 9)
			{
				if (n_times_columns == 9)
				{
					_putchar((square / 10) + '0');/*to find first digit of number*/
					_putchar((square % 10) + '0');/*to find last digit of number*/
				} else
				{
					_putchar((square / 10) + '0');
					_putchar((square % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			} if (square <= 9)
			{
				if (n_times_columns == 9)
				{
					_putchar(' ');
					_putchar((square % 10) + '0');		
				/*	if (n_times_rows == 0 && n_times_columns == 0)
					{
						_putchar((square % 10) + '0');
					} else
					{
						_putchar(' ');
						_putchar((square % 10) + '0');
					}*/
				}
				else if (n_times_columns == 0)
				{
					_putchar((square % 10) + '0');
					_putchar(',');
					_putchar(' ');
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

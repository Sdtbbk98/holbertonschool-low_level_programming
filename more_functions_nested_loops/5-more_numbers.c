#include "main.h"

/**
 * more_numbers -function that print 0-14 10x
 *
 * d_x_time -int, 10 times
 * Return: nada
 *
 */

void more_numbers(void)
{
	int numbers;
	int d_x_time;

	for (d_x_time = 1; d_x_time <= 10; d_x_time++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');
				/*_putchar((numbers % 10) + '0');*/
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}

}

#include "main.h"

/**
 * print_most_numbers -print all numbers 0-9 but not th 2 and 4.
 *
 * Return: nothing nada void
 *
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		_putchar(number + '0');
	}
	_putchar('\n');
}

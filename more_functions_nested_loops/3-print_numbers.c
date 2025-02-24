#include "main.h"

/**
 * print_numbers -function that print numbers form 0 to 9
 *
 * num - int, numbers
 * Retrun: voide nada nothing
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}

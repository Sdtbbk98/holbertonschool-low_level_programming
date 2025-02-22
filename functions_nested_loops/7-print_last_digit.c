#include "main.h"

/**
 * print_last_digit -it print the last digit of a number
 *
 * @num: input number
 *
 * Return: int last digit
 */

int print_last_digit(int num)
{
	int last_num = num % 10;

	if (num < 0)
	{
		num = last_num * (-1);
		_putchar(num + '0');
		return (num);
	}

	_putchar(last_num + '0');
	return (last_num);

}


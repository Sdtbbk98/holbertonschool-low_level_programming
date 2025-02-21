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
	if (num < 0)
	{
		num = (num % 10) * (-1);
		return (num);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		num = num % 10;
		return (num);
	}

}


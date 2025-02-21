#include "main.h"

/**
 * print_sign -the function print the sign of a number
 * 
 * Return: value 1 if it print + and @n is greater than zero
 * 	   value 0 if it print 0 and @n zero
 * 	   value -1 if it print - and @n is less than zero
 * @n: number that have it sign
 *
 */

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


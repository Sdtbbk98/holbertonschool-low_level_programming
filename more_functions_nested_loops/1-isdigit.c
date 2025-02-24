#include "main.h"

/**
 * _isdigit -it checks if @c is a digit
 *
 * @c: int the input number
 *
 * Return: 1 if it's true and 0 false
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
#include <ctype.h>

/**
 * _isalpha -it check for alphabetic character
 *
 * @c: varaible int
 *
 * Return: value 1 if @c is a letter and 0 for not character
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

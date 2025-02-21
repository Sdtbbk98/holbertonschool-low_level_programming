#include "main.h"
#include <ctype.h>

/**
 * _islower -a bult-in function that check for lower case
 *
 * @c: variable int
 *
 * Return: if the value is 1 the chr is lowercase
 *	if the value is 0 the chr is not lowercase
 *
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}


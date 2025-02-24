#include "main.h"

/**
 *_isupper -it will check if the @c is capital lettre
 *
 * @c: int character
 * Return: 1 si c'est vrai
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

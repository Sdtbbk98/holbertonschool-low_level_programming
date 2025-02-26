#include "main.h"

/**
 * print_rev - function that print reverse
 * @s: char, given character
 * Return: nada
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	index--;

	/* i want to start my loop with decrementing value */
	for ( ; s[index]; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}


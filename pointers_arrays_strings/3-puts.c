#include "main.h"

/**
 * _puts - function that print character and followed by \n
 * @str: char,
 * Return: nada
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet -it will the print the alphabet
 *
 * Return: value 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return;
}


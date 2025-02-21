#include "main.h"

/**
 * print_alphabet_x10 -it will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int number_of_line = 0;
	char alphabet;

	while (number_of_line < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		number_of_line++;
		_putchar('\n');
		
	}
}

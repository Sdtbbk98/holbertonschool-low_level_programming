#include <stdio.h>

/**
 * main -entry level
 *
 * Return: value 0
 */

int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}


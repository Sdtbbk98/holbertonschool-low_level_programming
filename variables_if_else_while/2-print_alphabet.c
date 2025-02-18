#include <stdio.h>
/**
 * main -entry level
 *
 * Return: it print the alphabet in lowercase
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)

		putchar(character);

	putchar('\n');

	return (0);

}


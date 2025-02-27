#include "main.h"
/**
 * puts2 - function that print pair characters
 * @str: char
 */

void puts2(char *str)
{
	int index = 0;
	int index1;
	int lenght;

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		lenght = index1 + 1;
	}

	for ( ; index <= lenght; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');

}


#include "main.h"

/**
 * rev_string - fucntion
 * @s: int, ponter of type char
 * Return: nada
 */

void rev_string(char *s)
{
	int index = 0;
	int lenght = _strlen(s) - 1;
	/* -1 to start form 0*/
	char chr;

	while (index < lenght)
	{
		chr = s[index];
		s[index] = s[lenght];
		s[lenght] = chr;

		index++;
		lenght--;
	}
}

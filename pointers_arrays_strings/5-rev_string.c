#include "main.h"

/**
 * rev_string - fucntion
 * @s: int, ponter of type char
 * Return: nada
 */

void rev_string(char *s)
{
	int index = 0;
	int i;
	int lenght;
	/* -1 to start form 0*/
	char chr;

	for (i = 0; s[i]; i++)
	{
		lenght = i + 1;
	}
	lenght = lenght - 1;
	while (index < lenght)
	{
		chr = s[index];
		s[index] = s[lenght];
		s[lenght] = chr;

		index++;
		lenght--;
	}
}

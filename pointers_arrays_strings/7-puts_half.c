#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that print the half of @str
 * @str: char, our stirng
 */

void puts_half(char *str)
{
	int lenght = 0;
	int s_point;
	int index = 0;
	int half;
	int index1;

	while (str[index] != '\0')
	{
		index++;
	}
	lenght = index;
	half = lenght / 2;
	s_point = lenght - half;
	for (index1 = s_point; index1 < lenght; index1++)
	{
		_putchar(str[index1]);
	}
	_putchar('\n');
}

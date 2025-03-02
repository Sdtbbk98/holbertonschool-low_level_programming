#include "main.h"

/**
* leet - function encodes a string to a number
* @str: char*, character
* Return: char*
*/

char *leet(char *str)
{

	char *Pstr = str;

	while (*str)
	{
		if (*str == 'a' || *str == 'A')
		{
			*str = '4';
		}
		if (*str == 'e' || *str == 'E')
		{
			*str = '3';
		}
		if (*str == 'o' || *str == 'O')
		{
			*str = '0';
		}
		if (*str == 't' || *str == 'T')
		{
			*str = '7';
		}
		if (*str == 'l' || *str == 'L')
		{
			*str = '1';
		}
		str++;
	}
	return (Pstr);
}

#include "main.h"

/**
* leet - function encodes a string to a number
* @str: char*, character
* Return: char*
*/

char *leet(char *str)
{
	char *Main = str;
	char *characters = "aeotlAEOTL";
	char *replacements = "4307143071";

	while (*str)
	{
		char *leet_ptr = characters;
		char *replacement_ptr = replacements;

		while (*leet_ptr)
	{
			if (*str == *leet_ptr)
			{
				*str = *replacement_ptr;
				break;
			}
			leet_ptr++;
			replacement_ptr++;
		}
		str++;
	}
	return (Main);
}

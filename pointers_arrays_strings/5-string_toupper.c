#include "main.h"

/**
 *  string_toupper - function change strings lowercase to uppercase.
 *  @str: char*, string
 *  Return: char*
 *  pstr: pointer of str
 */

char *string_toupper(char *str)
{
	char *p_strings = str;

	while (*p_strings != '\0')
	{
		if (*p_strings >= 'a' && *p_strings <= 'z')
		{
			*p_strings = *p_strings - ('a' - 'A');
		}
		p_strings++;
	}
	return (str);
}

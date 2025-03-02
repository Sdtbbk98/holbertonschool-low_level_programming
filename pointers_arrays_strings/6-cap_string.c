#include "main.h"
/**
* *cap_string - function that capitalizes all words
* @str: char *, strings given
* Return: char @str:
* n_word: int, new_word not n.g.a word it determine our first character.
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int n_word = 1;

	while (*ptr != '\0')
	{
		if (*ptr == '\t')
		{
			*ptr = ' ';
		}
		ptr++;
	}

	ptr = str;/*to restart from zero*/

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (n_word && *ptr >= 'a' && *ptr <= 'z')
			{
				*ptr -= ('a' - 'A');/*table acsii*/
			}
			n_word = 0;
		}
		else
		{
			if (*ptr == ',' || *ptr == ';' || *ptr == '!' || *ptr == '?' ||
				*ptr == '.' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
				*ptr == '{' || *ptr == '}' || *ptr == ' ' || *ptr == '\n' ||
				*ptr == '\t') {
			}
			n_word = 1;
		}
		ptr++;
	}
	return (str);
}

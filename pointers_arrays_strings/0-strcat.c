#include "main.h"

/**
* *_strcat - function that do the concatenation of 2 strings.
* @dest: char *
* @src: char *
* Return: the result of conatenation
*/

char *_strcat(char *dest, char *src)
{

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
	src++;
	}
	*dest = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strlen - function that calculate length
 * @s: , char pointer
 * Return: int, length of @*s
 */

int _strlen(char *s)
{
	int length = 0;
	int index;

	for (index = 0; s[index]; index++)
	{
		length = index + 1;
	}
	return (length);
}

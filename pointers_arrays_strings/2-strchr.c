#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a strings
 * @s: char*, our string
 * @c: char, the character that we r looking for to find in string
 * Return: char *, our string if it find the first @c:
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			break; /*if in the loop ptr_s == c it exit the loop */
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}

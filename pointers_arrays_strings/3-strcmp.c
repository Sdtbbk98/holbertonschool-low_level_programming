#include "main.h"
/**
* *_strcmp - function that compares two strings
* @s1: char* , first string
* @s2: char*, scd string
* Return: 0 if equal - shorter + greater S1 to S2
*/

int _strcmp(char *s1, char *s2)

{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

#include "main.h"
/**
* _strncpy - function that copy a string
* @dest: char*, destination buffer
* @src: char*, source that we r going to copy
* @n: int, number of character w r copying
* Return: char*, destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && dest[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

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
	int len_dest = 0;

	int len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0' && len_src >= 0 && len_src <= n)
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	dest[len_dest + len_src] = '\0';
	return (dest);
}

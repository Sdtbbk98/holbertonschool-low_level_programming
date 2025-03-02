#include "main.h"
/**
* _strncat - concatenate two strings @n bystes
* @dest: char*, destination
* @src: char* source
* @n: int, bytes
* Return: char*, dest(destination)
*/

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;

	while (dest[len_dest])
	{
		len_dest++;
	}

	while (src[len_src] != '\0' && len_src < n)
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	dest[len_dest + len_src] = '\0';
	return (dest);
}

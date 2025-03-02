#include "main.h"

/**
* *_strcat - function that do the concatenation of 2 strings.
* @dest: char *
* @src: char *
* len_dest - lenght of destination int
* len_src - lenght of source int
* Return: the result of conatenation
*/

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	dest[len_dest + len_src] = '\0';
	return (dest);
}

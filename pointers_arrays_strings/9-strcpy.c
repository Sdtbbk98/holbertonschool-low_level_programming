#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function, that copy str pointed by @src include th \0
 * @src: char, string source
 * @dest:char, our buffer
 * Return: char, @dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		/*printf("%d", src[index]);*/
		index++;
	}
	return (dest);

}

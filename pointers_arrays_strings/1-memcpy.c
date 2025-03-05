#include "main.h"

/**
 * _memcpy - function that memory area
 * @dest: char *, destination
 * @src: char *, source that we r going to copy
 * @n: unsigned int, n bytes
 * Return: char * @dest:
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p_chr;
	/*to */
	for (p_chr = 0; p_chr < n; p_chr++)
	{
		dest[p_chr] = src[p_chr];
	}
	return (dest);
}

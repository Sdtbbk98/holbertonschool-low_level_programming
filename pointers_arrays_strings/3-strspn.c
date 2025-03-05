#include "main.h"
/**
 * _strspn - function that get the lenght of substring in a main string
 * @s: char *, main string
 * @accept: char *, substring
 * p_chr: int, position of characters
 * lenght: int, lenght of substring
 * Return: unsigned int, lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	int p_chr;
	int p_chr1;/*position of character*/
	int lenght;

	for (p_chr = 0; s[p_chr] != '\0'; p_chr++)
	{
		for (p_chr1 = 0; accept[p_chr1] != '\0'; p_chr1++)
		{
			if (s[p_chr] == accept[p_chr1])
			{
				lenght++;
				break;
			}
		}
		/*if accept reach end return lenght*/
		if (accept[p_chr1] == '\0')
		{
			return (lenght);
		}

	}
	return (lenght);
}

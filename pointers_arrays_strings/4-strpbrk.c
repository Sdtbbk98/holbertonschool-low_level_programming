#include "main.h"
/**
* _strpbrk - function that searches a strings for any of as set of bytse
* @s: char *, main string
* @accept: char *, sub string
* Return: char *, @s main string character with his positiion
* p_chr: positon of character
*/
char *_strpbrk(char *s, char *accept)
{
	int p_chr;
	int p_chr1;

	for (p_chr = 0; s[p_chr] != '\0'; p_chr++)
	{
		for (p_chr1 = 0; accept[p_chr1] != '\0'; p_chr1++)
		{
			if (s[p_chr] == accept[p_chr1])
			{
				return (s + p_chr);
			}
		}
	}
	return (0);
}

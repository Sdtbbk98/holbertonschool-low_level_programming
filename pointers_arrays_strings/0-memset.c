#include "main.h"

/**
 * _memset - function that fill the memory
 * @s: char*, pointer, is our buffer
 * @b: char, character that we are going to assign to our memory
 * @n: usigned int, our range of @s:
 * Return: char *, @s:
 * p_chr: unsigned int, position_character.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p_chr; /* because our n is +*/

	for (p_chr = 0; p_chr < n; p_chr++)
	{
		s[p_chr] = b;
		/*once we find the position of our memory we fill them with @b character */
	}
	return (s);
}

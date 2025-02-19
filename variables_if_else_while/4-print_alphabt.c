#include <stdio.h>
/**
 * main -entry level
 *
 * Return: result (0)
 */
int main(void)
{
	char character = 'a';
	/* initialising our vraible*/
	while (character <= 'z')
	{
		if (character == 'q' || character == 'e')
		/* it will skip these two character */
		{
			character++; /*incrementing the character*/
		}
		else
		{
			putchar(character);
			character++;
			/*it incremente and move to next letter*/

		}
	}
	putchar('\n');
	return (0);
}

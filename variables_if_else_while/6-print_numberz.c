#include <stdio.h>

/**
 * main -entry level
 *
 * Return: -value 0
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		/* to add int in putchar we must add numeric value (ASCII) */
		number++;
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>

/**
 * main -entry level
 *
 * Return: value 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
		if (number <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


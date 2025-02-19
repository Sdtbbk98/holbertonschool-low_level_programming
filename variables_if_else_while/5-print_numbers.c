#include <stdio.h>

/**
 * main -entry level
 *
 * Return: result (0)
 */

int main()
{
	int number = 0;
	
	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}

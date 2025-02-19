#include <stdio.h>

/**
 * main -entry level
 *
 * Return: value 0
 */

int main(void)
{
	char base_hexa[] = "0123456789abcdef";
	int index = 0;

	while (index <= 16)
	{
		putchar(base_hexa[index]);
		index++;
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>

int main(void)
{
	int number = 0;
	
	while (number < 10)
	{
		putchar(number + '0');
		number++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


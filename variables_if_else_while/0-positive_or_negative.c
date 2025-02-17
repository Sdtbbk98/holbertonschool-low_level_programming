#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *
 * main entry level
 *
 * Return: positive, negative and Zero numbers
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} 
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0);
	{
	       	printf("%d is negative\n", n);
	}
	return (0);
}

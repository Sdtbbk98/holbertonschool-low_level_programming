#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry level
 *
 * Return: the last digit of n and show if it is greater or lesser
 */

int main(void)

{

	int n;
	int ld;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is great than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}


	return (0);

}


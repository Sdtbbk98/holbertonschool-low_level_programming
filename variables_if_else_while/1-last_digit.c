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
	int last_digit_of_n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* the below command will take n random number and divided by 10 and rest is our module*/ 
	last_digit_of_n = n % 10;

	if (last_digit_of_n > 5)
	{
		printf("Last digit of %d is %d and is great than 5\n", n, last_digit_of_n);
	}
	else if (last_digit_of_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit_of_n);
	}


	return (0);

}


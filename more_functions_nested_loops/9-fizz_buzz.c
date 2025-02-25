#include <stdio.h>

/**
 * main -entry level
 * Return: int, zero
 * number -int,  from 1 to 100
 * mod3 -int, model of 3
 * mod5 -int, model of 5
 *
 */

int main(void)
{
	int number;
	int mod3;
	int mod5;

	for (number = 1; number <= 100; number++)
	{
		mod3 = number % 3;
		mod5 = number % 5;
		if (number == 100)
		{
			printf("Buzz");
		}
		if (mod3 == 0 && mod5 != 0)
		{
			printf("Fizz ");
		}
		if (mod5 == 0 && mod3 != 0 && number != 100)
		{
			printf("Buzz ");
		}
		if (mod3 == 0 && mod5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (mod3 != 0 && mod5 != 0 && number != 100)
		{
			printf("%d ", number);
		}
	}
	printf("\n");
	return (0);
}

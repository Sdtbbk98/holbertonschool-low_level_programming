#include <stdio.h>

/**
 * main -entry level
 *
 *Return: the size of all types on the computer
 */
int main(void)
{
	int intType;
	char charType;
	long int  longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));

	printf("Size of an int: %zu byte(s)\n", sizeof(intType));

	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));

	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));

	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}


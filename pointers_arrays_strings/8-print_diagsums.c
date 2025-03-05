#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function the print the sums of the two diagnonals
* @a: int *, array
* @size: int, longeur
* Return: nada
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1  = 0;
	
	for (i = 0; i < size; i++)
	{

		sum = sum + a[i * size +i];
		sum1 = sum1 + a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}

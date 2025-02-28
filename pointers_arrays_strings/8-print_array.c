#include "main.h"
#include <stdio.h>
/**
 * print_array - function that print n elements of an arrray
 * @a: int, given arrray
 * @n: int, element
 * Return: nada
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		/*i dont want to have , and space after last number so i do n-1*/
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
		/*printf("index: %d\n n: %d\n a: %d\n", index, n, a[index]);*/
		/* the above printf is my own tester :) */
	}
	putchar('\n');
}

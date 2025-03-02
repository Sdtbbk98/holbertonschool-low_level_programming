#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: int, array
* @n: int, numbers of elements
* Return: nada
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n;
	int tmp;

	while (start < end - 1)
	{
		tmp = a[start];
		a[start] = a[end - 1];
		a[end - 1] = tmp;

		start++;
		end--;
	}
}

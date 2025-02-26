#include "main.h"

/**
 * swap_int - function that do swaping
 * @a: int , first value
 * @b: int , scd value
 * Return: nada void
 */

void swap_int(int *a, int *b)
{
	int a_swap = *a;
	int b_swap = *b;

	*a = b_swap;
	*b = a_swap;

}

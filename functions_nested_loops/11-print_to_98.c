#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -function that print from @n to 98
 * @n: given number
 * l_number - int last_number = n(given number)
 * d_number - int display number till n
 * Return: void nada
 */

void print_to_98(int n)
{
	int l_number = 98;
	int d_number;

	if (n < l_number)
	{
		for (d_number = n; d_number <= l_number; d_number++)
		{
			if (d_number != 98)
			{
				printf("%d, ", d_number);
			} else
			{
				printf("%d\n", d_number);
			}
		}
	} else if (n > l_number)
	{
		for (d_number = n; d_number >= l_number; d_number--)
		{
			if (d_number != 98)
			{
				printf("%d, ", d_number);
			} else
			{
				printf("%d\n", d_number);
			}
		}
	} else
	{
		printf("%d\n", l_number);
	}

}


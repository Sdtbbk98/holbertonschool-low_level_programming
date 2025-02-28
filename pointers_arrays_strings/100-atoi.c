#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int index = 0;
	int result = 0;
	int sign = 1;

	while (s[index] == ' ')
	{
		index++;
	}
	if (s[index] == '+')
	{
		index++;
	}
	else if (s[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (result * sign);
}

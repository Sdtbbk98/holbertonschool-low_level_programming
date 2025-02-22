#include "main.h"

/**
 * jack_bauer -print evey minutes of the day
 *
 * Return: value zero
 */

void jack_bauer(void)
{
	int minutes;
	int hours;
	int hour_first_line;
	int hour_scd_line;
	int minutes_first_line;
	int minutes_scd_line;

	for (hours = 0; hours < 24; hours++)
	{
		hour_first_line = hours / 10;
		hour_scd_line = hours % 10;		

		for (minutes = 0; minutes <60; minutes++)
		{
			minutes_first_line = minutes / 10;
			minutes_scd_line = minutes % 10;

			_putchar(hour_first_line + '0');
			_putchar(hour_scd_line + '0');
			_putchar(':');

			_putchar(minutes_first_line + '0');
			_putchar(minutes_scd_line + '0');
			_putchar('\n');
		}
	}

}


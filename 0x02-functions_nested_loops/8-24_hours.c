#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 *
 * File: 8-24_hours.c
 * Auth: Zuahir Ahmed
 *
 * Return: Success 0
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hou++)
	{
		for (minute = 0; minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minue % 10) + '0');
			_putchar('\n');
		}
	}
}

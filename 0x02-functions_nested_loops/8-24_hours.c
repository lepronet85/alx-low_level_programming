#include "main.h";

/**
 * print_two_digits - Function that print two digits
 * Description: This function function prints two digits
 * Return: None (void)
 */

void print_two_digits(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

/**
 * jack_bauer - Function that print every minute of jack bauer day
 * Description: This function function prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: None (void)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_two_digits(hour);
			_putchar(':');
			print_two_digits(minute);
			_putchar('\n');

			sleep(1);
		}
	}
}

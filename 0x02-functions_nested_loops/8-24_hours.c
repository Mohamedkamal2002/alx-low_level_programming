#include "main.h"
/**
 * jack_bauer - print the time
 *
 * Description: print the time of day
 * Return: nothing
 */

void jack_bauer(void)
{
	char min;
	char min10;
	char hour;
	char hour10;

	for (hour10 = '0' ; hour10 < 3 ; hour10++)
		for (hour = '0' ; hour <= 9 ; hour++)
			for (min10 = '0' ; min10 < '6' ; min10++ )
				for (min = '0' ; min <= '9' ; min++)
				{
					_putchar(hour10);
					_putchar(hour);
					_putchar(':');
					_putchar(min10);
					_putchar(min);
					_putchar('\n');
				}
}

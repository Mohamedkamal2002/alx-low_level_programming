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

	for (hour10 = '0' ; hour10 < '3' ; hour10++)
		for (hour = '0' ; hour < '6' ; hour++)
			for (min10 = '0' ; min10 < '9' ; min10++)
				for (min = '0' ; min <= '9' ; min++)
				{
					if (hour10 == '2' && hour  > '3')
						break;
					_putchar(hour10);
					_putchar(hour);
					_putchar(':');
					_putchar(min10);
					_putchar(min);
					_putchar('\n');
				}
}

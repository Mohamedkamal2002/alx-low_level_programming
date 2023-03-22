#include"main.h"
/**
 * print_last_digit - return the last decimal digit
 * @n: the whole number
 *
 * Description:~
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
	{
		_putchar(-r + '0');
		return (-r);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
}

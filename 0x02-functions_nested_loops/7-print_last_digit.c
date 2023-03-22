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

	if (n < 0)
	n *= -1;
	r = n % 10;
	_putchar(r + '0');
	return (n % 10);
}
